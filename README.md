# C++ Algorithms & Data Structures Examples

This repository contains C++ examples of fundamental algorithms and data structures. It's designed to demonstrate understanding of logic, memory management.

## Contents

- **Recursion**
  - `fibonacci.cpp`: Simple recursive Fibonacci example
  - `permutations.cpp`: Generate permutations recursively

- **Sorting**
  - `quicksort.cpp`: QuickSort implementation using arrays
  - `mergesort.cpp`: MergeSort implementation

- **Searching**
  - `binary_search.cpp`: Binary search on sorted arrays

- **Data Structures**
  - `linked_list/`
    - `linked_list.cpp`: Custom singly linked list implementation
    - `reverse_list.cpp`: Reverse linked list
    - `detect_cycle.cpp`: Cycle detection in linked list
  - `stack_queue/`
    - `valid_parentheses.cpp`: Check balanced parentheses using stack logic with arrays
    - `min_stack.cpp`: Stack with minimum element tracking (array-based)
  - `trees/`
    - `binary_tree_inorder.cpp`: Inorder traversal of binary tree
    - `bst_insert.cpp`: Insert nodes into a Binary Search Tree
  - `graphs/`
    - `dfs.cpp`: Depth-first search on graph using adjacency list
    - `bfs.cpp`: Breadth-first search on graph

- **Arrays & Strings**
  - `two_sum.cpp`: Two sum problem using arrays
  - `max_subarray_kadane.cpp`: Kadane’s algorithm for max subarray sum
  - `is_anagram.cpp`: Check if two strings are anagrams
  - `reverse_words.cpp`: Reverse words in a string

- **Dynamic Programming**
  - `longest_common_subsequence.cpp`: LCS problem
  - `knapsack.cpp`: 0/1 Knapsack problem

## How to Compile and Run

Make sure you have `g++` installed. Compile a file like this:

```bash
g++ -std=c++17 filename.cpp -o output
./output
