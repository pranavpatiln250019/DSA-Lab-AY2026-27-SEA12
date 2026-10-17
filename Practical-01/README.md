# Practical 01: Pattern Printing Problems

## Problem Statement
Write efficient C programs to generate the following four structural patterns for a given limit `n = 4`:
1. Right-angle triangle with numbers.
2. Diamond shape with numbers.
3. Pyramid with asterisks.
4. Pyramid using alphabets.

---

## Approach
The solutions leverage nested loop structures:
* **Outer Loop:** Controls the rows (\(i\)), dictating the total vertical height of the pattern.
* **Inner Loops:** Standardize structural arrangement row-by-row. 
  * The first inner loop prints leading space padding (`" "`) to visually align geometric structures like pyramids and diamonds.
  * The subsequent inner loops calculate and print numerical values, character sequences, or asterisks sequentially based on structural tracking variables.

---

## Test Cases & Output

### 1. Right-angle triangle with numbers
**Sample Input:** `n = 4`  
**Sample Output:**
```text
1 
1 2 
1 2 3 
1 2 3 4 
```

### 2. Diamond shape with numbers
**Sample Input:** `n = 4`  
**Sample Output:**
```text
   1 
  2 2 
 3 3 3 
4 4 4 4 
 3 3 3 
  2 2 
   1 
```

### 3. Pyramid with asterisks
**Sample Input:** `n = 4`  
**Sample Output:**
```text
   * 
  * * 
 * * * 
* * * * 
```

### 4. Pyramid using alphabets
**Sample Input:** `n = 4`  
**Sample Output:**
```text
   A
  ABA
 ABCBA
ABCDCBA
```

---

## Complexity Analysis

### Time Complexity: \(O(n^2)\)
* **Reasoning:** For each pattern, an outer loop executes \(n\) times. Inside it, nested loops run proportionally to the current row index, scaling dynamically up to \(n\). The operations performed inside the innermost loops are basic character/number printing actions which take constant time, yielding a total time complexity of \(O(n \times n) = O(n^2)\).

### Space Complexity: \(O(1)\)
* **Reasoning:** The algorithm runs entirely in-place. It relies strictly on a few localized auxiliary primitive variables (`n`, `i`, `j`, `ch`) to handle loop control and tracking. No arrays, collections, or dynamic memories are allocated, keeping the memory signature constant.

---

## Conclusion
By designing and writing these programs, I successfully learned how to handle nested iteration paths in C. I verified how to use space padding to dynamically control the structural alignment of terminal outputs, which lays a solid foundation for managing multi-dimensional index spaces in upcoming Data Structures.
