
NAME     := push_swap
CC       := gcc
AR       := ar
ARFLAGS  := rcs
CFLAGS   := -Wall -Wextra -Werror
OBJDIR   := obj
LIBFT_DIR := libft
LIBFT     := $(LIBFT_DIR)/libft.a
INCLUDES := -Iincludes -I$(LIBFT_DIR)


SRC =	push_swap.c\
		src/sorting_operations/push.c\
		src/sorting_operations/reverse.c\
		src/sorting_operations/rotate.c\
		src/sorting_operations/swap.c\
		src/validate_input.c\
		src/push_swap_utils/ft_check_valid.c\
		src/push_swap_utils/ft_atol.c\
		src/push_swap_utils/ft_indexing.c\
		src/push_swap_utils/ft_find_whitespace.c\
		src/push_swap_utils/ft_stacksize.c

OBJ = $(patsubst %.c,$(OBJDIR)/%.o,$(SRC))

all: $(NAME)


$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
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

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@


$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	@echo "Removing object files."
	@rm -rf $(OBJDIR)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@echo "Removing archive."
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
