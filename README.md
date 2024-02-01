# CSC 122 Types of Recursion

This repo demonstrates a number of different types of recursion that you might encounter out in the wild.

## Running the Examples

Currently, the Makefile is only set up to run the code using `g++`. You can run each example using:

```bash
make 1
make 2
make 3
make 4
make 5
make 6
make 7
make 8
```

## Notes

Recursion can be broadly broken up into two categories - direct and indirect. Direct recursion is when a function calls itself whereas indirect recursion is when a function calls other functions which in turn eventually loop back to the original. These broad categories can be broken down further as described below.

### 1. Tail Recursion

Tail recursion is a type of recursion where the recursive call is the last statement of the function.

### 2. Head Recursion

Head recursion is a type of recursion where the recursive call is located before the end of the function. Generally speaking, traditional `for` loops are easier to convert to tail recursion than to head recursion.

### 3. Linear Recursion

Linear recursion occurs when a function calls itself exactly one time in each recursive step.

### 4. Tree Recursion

Tree recursion occurs when a function calls itself two or more times in each recursive step.

### 5. Nested Recursion

This is "recursion inside recursion". In nested recursion, we pass a function call as a parameter to the recursive function.

### 6. Indirect Recursion

Indirect recursion occurs when a function calls another function, which in turn calls the first function again.

### 7. Indirect Recursion (Example)

It can be difficult to see why indirect recursion might be useful. This code demonstrates the [Collatz conjecture](https://en.wikipedia.org/wiki/Collatz_conjecture) and how indirect recursion could be used to solve it.

### 8. Memoization

Memoization is a technique to store calculated values while a function is recursing in order to speed up execution time and / or use fewer system resources.
