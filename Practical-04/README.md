# Practical 04: Decimal to Binary Conversion using Stack

## Problem Statement
Design and implement a C program to convert a given base-10 decimal number into its base-2 binary equivalent utilizing a Last-In, First-Out (LIFO) Stack data structure.

---

## Approach
* **Division-by-2 Method:** The decimal integer is repeatedly divided by 2, and the resulting remainder (0 or 1) is captured at each step.
* **LIFO Stack Mechanics:** Because the remainders are generated from the least significant bit (LSB) to the most significant bit (MSB), they need to be reversed. By tracking remainders via `push()` operations onto a stack, we can subsequently `pop()` them out to display the final binary string in the correct high-to-low bit order.

---

## Complexity Analysis

### Time Complexity: \(O(\log_2 n)\)
* **Reasoning:** The input value n is progressively divided in half during each iteration of the loop. The total number of push and pop operations scales logarithmically based on the size of the base-10 input.

### Space Complexity: \(O(\log_2 n)\)
* **Reasoning:** The memory utilization scales with the total number of bits needed to represent the integer. For a standard 32-bit compilation footprint, the fixed stack array structure uses minimal and restricted system memory bounds.
