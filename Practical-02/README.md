# Practical 02: Student Result Database Management using Array of Structures

## Problem Statement
Design and implement a menu-driven database application in C to manage student details utilizing an array of structures. The application supports creating records, displaying information, searching using linear search, and sorting elements based on roll number.

---

## Approach
* **Data Definition:** A custom `struct stud` tracks composite items including basic attributes, marks, total score, and calculated percentages.
* **Linear Search:** Iterates sequentially from index `0` to `n-1` checking for the target key against `s[i].rn`.
* **Bubble Sort:** Compares consecutive elements and swaps the entire structured items when sorting order (`s[j].rn > s[j+1].rn`) is violated.

---

## Complexity Analysis

### Time Complexity
* **Create/Display:** \(O(n)\) — Loops linearly through database rows.
* **Linear Search:** \(O(n)\) — Inspects element by element in the worst case if structural matches are missing.
* **Bubble Sort:** \(O(n^2)\) — Requires two nested loop passes to sequentially verify sorting ordering boundaries.

### Space Complexity: \(O(1)\)
The program modifies records in-place within the array. It utilizes no additional auxiliary runtime dynamic tracking structures, remaining completely static.
