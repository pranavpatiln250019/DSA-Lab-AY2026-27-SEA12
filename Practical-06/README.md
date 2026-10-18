# Practical 06: Train Ticket Booking System Using Queue

## Problem Statement
Design and implement a C program modeling a real-world Train Ticket Booking System utilizing structural circular bounds for ticket confirmations alongside a linear sequential tracking layout for handling a dynamic consumer waiting list.

---

## Approach
* **Booking Allocation:** Confirmations stream directly into a Circular Queue system structure. If boundaries indicate the queue buffer limits are saturated, additional arrivals drop safely into a secondary array managing the waiting list.
* **Cancellation Shifting:** When a ticket gets canceled inside the middle entries of the confirmation structure, an active lookahead tracking operation shifts elements left sequentially to fill the vacant index space and maintain order.
* **Waiting Escalation:** After shifting confirms, the first available tracking entry in the waiting list gets promoted (`wait[0]`) into the main booking queue layout via an auto-confirmation block.

---

## Complexity Analysis

### Time Complexity
* **Ticket Booking:** O(1) — Direct array placement logic.
* **Cancellation Analysis:** O(n) — Linear lookups to locate target entries, plus index resetting routines to adjust positioning.
* **Display Traversal:** O(n) — Loops linearly through confirmation indices and wait spaces.

### Space Complexity: O(1)
All elements scale within absolute predefined limits allocated during program execution startup without using any external heap memory.
