
NAME     := push_swap.a
CC       := gcc
AR       := ar
ARFLAGS  := rcs
CFLAGS   := -Wall -Wextra -Werror
OBJDIR   := obj


SRC =	
		src/validate_input.c\
			src/push_swap_utils/ft_atol.c\
			src/push_swap_utils/ft_indexing.c\
			src/ft_find_witespace.c

OBJ = $(patsubst %.c,$(OBJDIR)/%.o,$(SRC))

all: $(NAME)


$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $@ $^
	@echo
	@printf "%s\n" "$$( \
	awk ' \
	BEGIN { \
		lines[1]="██████████████████████████████████████████████████"; \
		lines[2]="█▄ ▄▄ █ ██ █ ▄▄▄▄█ ██ ███ ▄▄▄▄█ █▀▀▀█ █▀▄▄ █▄ ▄▄ █"; \
		lines[3]="██ ▄▄▄█ ██ █▄▄▄▄ █ ▄▄ ███▄▄▄▄ █ █ █ █ █ ▀▀ ██ ▄▄▄█"; \
		lines[4]="█▄▄▄███▄▄▄▄█▄▄▄▄▄█▄██▄███▄▄▄▄▄█▄▄▄█▄▄▄█▄██▄█▄▄▄███"; \
		lines[5]="▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"; \
		width=length(lines[1]); \
		for (l=1; l<=5; l++) { \
			for (i=1; i<=width; i++) { \
				r=int(255*(i-1)/(width-1)); \
				g=int(255*(width-i)/(width-1)); \
				printf "\033[38;2;%d;%d;0m%s", r, g, substr(lines[l], i, 1); \
			} \
			printf "\033[0m\n"; \
		} \
	}' )"
	@echo
	@echo "push_swap archive built successfully"
	@echo

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	@echo "Removing object files."
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "Removing archive."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
