# Practical 05: Circular Queue Implementation for a Parcel Handling System

## Problem Statement
Design and implement a C program to simulate a real-world Parcel Handling System using a **Circular Queue** array structure. The application must optimize storage usage by executing add (enqueue) and dispatch (dequeue) operations circularly.

---

## Approach
* **Circular Incrementation:** Uses modulo division `(index + 1) % SIZE` to jump positions back from the final boundary index to position `0`.
* **Full Condition:** Evaluated by analyzing whether the structural step immediately following the `rear` cursor loops right into the `front` location (`front == (rear + 1) % SIZE`).
* **Empty Condition:** Confirmed by testing if `front == -1`.

---

## Complexity Analysis

### Time Complexity: O(1) for Operations
* **Add (Enqueue):** O(1) — Constant time calculations using immediate indices access.
* **Dispatch (Dequeue):** O(1) — Immediate removal tracking without shifting elements.
* **Display:** O(n) — Traverses elements currently resident within active front-to-rear circular queue positions.

### Space Complexity: O(1)
* **Reasoning:** Leverages a pre-allocated fixed-size buffer array space layout bounds determined explicitly at execution start (`SIZE = 5`). No dynamic scaling overhead allocations are made.
