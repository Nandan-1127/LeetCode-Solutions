## Maximum Subarray

### Problem
Find the contiguous subarray with the largest sum.

---

### Brute Force
Check all possible subarrays.

Time Complexity: **O(n²)**

---

### Optimized Approach (Kadane's Algorithm)

Idea:
- Maintain a running sum.
- If the sum becomes negative, reset it to zero.

Why?
A negative sum will only reduce the future subarray sum.

---

### Complexity

Time: **O(n)**  
Space: **O(1)**

---

### Key Concept

Kadane’s Algorithm is a dynamic programming technique used to solve maximum subarray problems efficiently.