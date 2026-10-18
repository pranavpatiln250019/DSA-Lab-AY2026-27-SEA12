# Practical 07: Dynamic Text Editor Simulation Using Singly Linked List (SLL)

## Problem Statement
Design and implement a C program to simulate a line-by-line dynamic text editor utilizing a Singly Linked List (SLL). The editor must handle arbitrary string elements at runtime and support core memory management operations including node creation, arbitrary index insertions, item deletions, display traversals, and complete structural runtime link pointer reversals.

---

## Approach
* **Dynamic Nodes Allocation:** Custom instances of heap-allocated structure segments (`malloc`) bundle textual sequence buffers bounded inside dynamic link addresses (`*next`).
* **Arbitrary Index Manipulation:** Mid-list interactions step pointers precisely to index target `loc - 1` positions, dynamically swapping boundary links without needing to shift adjacent structural containers.
* **In-Place Reversal:** Uses a three-pointer tracking layout (`previous`, `current`, `next`) to flip link pointer addresses iteratively in a single linear pass without using supplementary memory.

---

## Complexity Analysis

### Time Complexity
* **Creation/Traversal (Display):** O(n) — Inspects or links records sequentially.
* **Arbitrary Insertion/Deletion:** O(n) — Finding target locations requires traversal in the worst-case scenario. However, the physical configuration modification takes constant O(1) time.
* **Pointer Reversal:** O(n) — Visited nodes are re-vectored inside a single continuous processing timeline.

### Space Complexity: O(n)
* **Reasoning:** Memory footprint allocation scales directly proportionally to the number of textual nodes currently active in the text editor.
