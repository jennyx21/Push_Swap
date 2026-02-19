*This project has been created as part of the 42 curriculum by jtruckse.*

# push_swap

## Description

push_swap is an algorithmic project that consists of sorting a stack of integers using a limited set of predefined operations between two stacks (A and B). 
The objective is to sort the numbers in ascending order while minimizing the total number of operations: 

- `sa` – swap the first 2 elements of stack A  
- `sb` – swap the first 2 elements of stack B  
- `ss` – `sa` and `sb` at the same time  
- `pa` – push the top element from B to A  
- `pb` – push the top element from A to B  
- `ra` – rotate stack A  
- `rb` – rotate stack B  
- `rr` – `ra` and `rb` at the same time  
- `rra` – reverse rotate stack A  
- `rrb` – reverse rotate stack B  
- `rrr` – `rra` and `rrb` at the same time  


For this implementation, a K-Sort based algorithm was used for medium and large input sizes.
The K-Sort strategy divides the input into dynamically calculated value ranges (decision median), pushes elements to stack B in structured segments, 
rotates stack B strategically for better positioning, and rebuilds stack A by always pushing back the current maximum element.
This approach reduces unnecessary rotations and achieves competitive operation counts for 100 and 500 numbers. 
For small input sizes (≤6 elements), optimized hardcoded sorting logic is used to guarantee minimal operations.

## Instructions

To compile the project:

`make`

Execute :

`./push_swap`

Example: 

`./push_swap 3 2 1`


## Resources

https://medium.com/@brakebein42/k-distribution-sort-applied-to-the-push-swap-problem-ae2d96d68376
https://www.geeksforgeeks.org/cpp/command-line-arguments-in-c-cpp/
https://www.youtube.com/watch?v=uBZHMkpsTfg&list=PLfqABt5AS4FmXeWuuNDS3XGENJO1VYGxl
https://push.eliotlucas.ch/
https://github.com/o-reo/push_swap_visualizer



## Features and Technical Choices

The program includes robust input validation, duplicate detection, integer overflow protection, optimized sorting for 3, 5, 100 and 500 numbers, an efficient K-Sort strategy for large datasets, memory-leak free implementation, and full Norm compliance.
Linked lists are used for stack representation, operation count minimization was prioritized, and algorithm selection depends on input size but the main algorythm is k-sort.



## AI Usage

Help with READ me structure 
was used strictly as a learning and support tool.
AI was used to review conceptual logic during debugging.

