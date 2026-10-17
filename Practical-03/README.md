# Practical 03: Contact Searching using Sequential (Linear) and Binary Search

## Problem Statement
Design and implement a C program to store contact details (Name, Phone Number, and Address) using structures. Implement and compare the performance of **Sequential (Linear) Search** and **Binary Search** algorithms based on the number of comparisons made.

---

## Approach
* **Linear Search:** Scans the unsorted contact array sequentially from start to end. It does not require data to be ordered.
* **Sorting (Data Prep):** Before binary search can run, a bubble sort swaps entire composite `contact` structure elements to rank entries alphabetically by name.
* **Binary Search:** Follows a divide-and-conquer strategy on sorted structures. It continuously splits the lookup space in half, comparing the midpoint item (`c[mid].name`) against the target search key.

---

## Complexity Analysis

### Time Complexity
* **Linear Search:** 
  * Best Case: O(1) (Target is found at the first position)
  * Worst Case: O(n) (Target is at the end or absent)
* **Binary Search (Excluding Sort Time):** 
  * Best Case: O(1) (Target is exactly at the middle index)
  * Worst Case: \(O(\log n)\) (Lookup space recursively divided down to a single element)

### Space Complexity: O(1)
The sorting and lookup routines run strictly in-place inside the pre-allocated struct container. No extra dynamic space arrays are generated.
