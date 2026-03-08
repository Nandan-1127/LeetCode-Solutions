## Merge Intervals

### Problem
Given a collection of intervals, merge all overlapping intervals.

---

### Approach

1. Sort intervals based on start time.
2. Traverse the intervals.
3. If the current interval overlaps with the previous one,
   merge them.
4. Otherwise add a new interval.

---

### Example

Input:
[[1,3],[2,6],[8,10],[15,18]]

Output:
[[1,6],[8,10],[15,18]]

---

### Complexity

Time: O(n log n)  
Space: O(n)

---

### Key Concept

Sorting helps bring overlapping intervals next to each other,
making merging straightforward.