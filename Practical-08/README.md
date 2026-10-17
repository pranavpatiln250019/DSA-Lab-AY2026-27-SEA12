# Practical 08: Online Directory Management System Using Binary Search Tree

## Problem Statement
Design and implement a C program modeling a case-insensitive Online Directory System using a **Binary Search Tree (BST)**. The application must support node insertions, lookups, and showcase structural information orderings via Inorder, Preorder, and Postorder tree traversal routines.

---

## Approach
* **BST Property Management:** Lexicographical sorting determines node placement. Strings smaller than the parent move to the `left` subtree, while larger names route to the `right`.
* **Traversals:** 
  * **Inorder (`L-Ro-R`):** Outputs directory properties sorted alphabetically.
  * **Preorder (`Ro-L-R`):** Displays root configurations before exploring deeper nodes.
  * **Postorder (`L-R-Ro`):** Explores structural leaf footprints before processing subroots, which is optimal for deletion operations.
* **Case Insensitivity:** Replaces `strcmp` with `strcasecmp` to allow users to search without worrying about matching precise letter case layouts.

---

## Complexity Analysis

### Time Complexity
* **Insertion / Searching:** 
  * Best/Average Case: \(O(\log n)\) — Occurs when the directory forms a balanced tree structure.
  * Worst Case: O(n) — Triggered if data enters in absolute sorted alphabetical ordering, creating a skewed degenerate tree layout.
* **Traversals:** O(n) — Visually steps through all resident directory structure records exactly once.

### Space Complexity: O(n)
* **Reasoning:** Memory usage scales linearly based on the exact quantity of directory nodes stored on the heap.
