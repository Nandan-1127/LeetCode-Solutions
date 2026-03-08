## Sort Colors

### Problem
Sort an array containing only 0s, 1s and 2s.

---

### Brute Force
Sort the array.

Time Complexity: O(n log n)

---

### Optimized Approach
Use the **Dutch National Flag Algorithm**.

Maintain three pointers:

low → boundary for 0s  
mid → current element  
high → boundary for 2s

---

### Rules

If nums[mid] == 0 → swap with low  
If nums[mid] == 1 → move mid  
If nums[mid] == 2 → swap with high

---

### Complexity

Time: O(n)  
Space: O(1)

---

### Key Concept

Three pointer partitioning technique.