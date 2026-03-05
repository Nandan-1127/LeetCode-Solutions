## 4Sum

### Problem
Find all unique quadruplets in the array that sum to the target.

---

### Brute Force
Check all quadruplets.

Time Complexity: **O(n⁴)**  
Too slow.

---

### Optimized Approach (Sorting + Two Pointers)

1. Sort the array.
2. Fix the first element.
3. Fix the second element.
4. Use two pointers to find remaining two numbers.
5. Skip duplicates to avoid repeated answers.

---

### Key Insight
This is an extension of the **3Sum problem**.

Instead of fixing one element, we fix **two elements** and then apply the two-pointer technique.

---

### Complexity

Time: **O(n³)**  
Space: **O(1)** (excluding output)

---

### Concepts Practiced
- Two pointers
- Duplicate handling
- Sorting based optimization