# C++ Recursive Functions

This repository contains examples and explanations of recursive functions in C++. Recursive functions are functions that call themselves to solve a problem by breaking it down into smaller, similar subproblems. This README provides an overview of how to work with recursive functions in C++.

## Table of Contents
- [Recursive Functions](#recursive-functions)
  - [Definition](#definition)
  - [Base Case](#base-case)
  - [Example: Calculating Factorial](#example-calculating-factorial)
- [Algorithm](#algorithm)
- [Output](#output)

## Recursive Functions

### Definition

A recursive function is a function that calls itself to solve a problem. It breaks down a complex problem into simpler, similar subproblems and solves each subproblem individually. Recursive functions are defined in terms of their base case(s) and recursive case(s).

### Base Case

A base case is a condition that determines when the recursion should stop. It provides the answer for the simplest, smallest subproblem that doesn't require further recursion.

### Example: Calculating Factorial

Here's an example of a recursive function to calculate the factorial of a number:

```cpp
#include <iostream>

unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: factorial of n is n times factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    int num;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;
    
    if (num < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        unsigned long long result = factorial(num);
        std::cout << "Factorial of " << num << " is " << result << std::endl;
    }

    return 0;
}
```

In this example, the `factorial` function calls itself recursively to calculate the factorial of a number. The base case (n == 0) ensures that the recursion stops when the input reaches 0.

## Algorithm
- **Algorithm: Factorial Calculation**

Input: An integer 'n' for which you want to calculate the factorial.
Output: The factorial of 'n'.

1. Start with a function named 'factorial' that takes an integer 'n' as its argument.
2. Inside the 'factorial' function:
   a. Check the base case: If 'n' is 0 or 1, return 1 because the factorial of 0 and 1 is 1.
   b. If 'n' is greater than 1, calculate the factorial recursively as follows:
      - Multiply 'n' by the result of the 'factorial' function with argument 'n - 1'.
      - Return this result.
3. In the 'main' function:
   a. Declare an integer 'num' to store the input number for which you want to calculate the factorial.
   b. Ask the user to input the value of 'num'.
   c. Call the 'factorial' function with 'num' as the argument to compute the factorial.
   d. Display the result as the factorial of 'num'.

- **Algorithm: Sum of Integers from 1 to n**

Algorithm: Sum of Integers from 1 to n Using Recursive Function

Input: A positive integer 'n'.
Output: The sum of all integers from 1 to 'n'.

1. Initialize a recursive function 'sumOfIntegers' that takes an integer 'n' as its argument.
2. In the 'sumOfIntegers' function:
   a. Check the base case: If 'n' is 1, return 1 because the sum of integers from 1 to 1 is 1.
   b. If 'n' is greater than 1, calculate the sum recursively as follows:
      - Return 'n' plus the result of the 'sumOfIntegers' function with argument 'n - 1'.
3. In the 'main' function:
   a. Declare an integer variable 'n' to store the input value for which you want to calculate the sum.
   b. Ask the user to input the value of 'n'.
   c. Call the 'sumOfIntegers' function with 'n' as the argument to compute the sum.
   d. Display the result as the sum of integers from 1 to 'n'.

- **Algorithm: Print String in Reverse Using Recursive Function**
  
Input: A string 'str' and the length of the string 'n'.
Output: Print the characters of 'str' in reverse order.

1. Initialize a recursive function 'printReverseString' that takes two arguments: 'str' and 'n'.
2. In the 'printReverseString' function:
   a. Check the base case: If 'n' is 0 (the string is empty), return.
   b. Print the last character of 'str' (str[n-1]).
   c. Call the 'printReverseString' function recursively with 'str' excluding the last character (str[0 to n-2]) and 'n-1' as arguments.
3. In the 'main' function:
   a. Declare a character array 'str' to store the input string.
   b. Read the input string into 'str'.
   c. Calculate the length of the input string and store it in 'n'.
   d. Call the 'printReverseString' function with 'str' and 'n' as arguments to print the string in reverse order

## **OUTPUT**

  - **Algorithm: Factorial Calculation**

![exp15_1](https://github.com/Purvansha022609/Recursion-/assets/139473344/051f0bbb-938b-4038-b85d-2d264020c2e8)

- **Algorithm: Sum of Integers from 1 to n**

![exp15_2](https://github.com/Purvansha022609/Recursion-/assets/139473344/7fd507b2-21ee-4a33-9b74-9d67673acfad)

- **Algorithm: Print String in Reverse Using Recursive Function**

![exp15_3](https://github.com/Purvansha022609/Recursion-/assets/139473344/67ff5fcf-01f6-413e-99b3-e822813bb2dc)
