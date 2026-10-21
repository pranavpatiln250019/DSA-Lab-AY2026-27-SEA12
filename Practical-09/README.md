# Practical 9: Campus Navigation using Graph Traversals

## Problem Statement
Design and implement a campus navigation system framework using Graph Traversals. Represent the campus buildings as vertices and paths between them as edges. Perform Breadth-First Search (BFS) and Depth-First Search (DFS) journeys starting from a specific building.

## Approach
* **Graph Representation:** Used an Adjacency Matrix (`arr[vrtx][vrtx]`) to store unweighted, undirected connection routes between buildings.
* **BFS (Breadth-First Search):** Implemented using a queue data structure to explore adjacent buildings level-by-level.
* **DFS (Depth-First Search):** Implemented using recursion (system stack) to explore as deep as possible along each path branch before backtracking.

## Complexity Analysis
* **Time Complexity:** 
  * **Adjacency Matrix Initialization:** O(V²) where V is the number of buildings.
  * **BFS Traversal:** O(V²) because it scans a whole matrix row for every popped node.
  * **DFS Traversal:** O(V²) due to traversing the adjacency matrix rows recursively.
* **Space Complexity:** O(V²) to store the 2D Adjacency matrix, alongside O(V) auxiliary space for trackers (`visited`, `queue`, and recursion stack arrays).

## Conclusion
Graph traversal algorithms effectively map out reachable locations inside a network. BFS is ideal for finding the shortest path in terms of steps, while DFS is effective for complete exhaustive branch checks.
