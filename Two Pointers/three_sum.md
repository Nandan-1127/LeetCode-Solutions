## 3Sum

### 🔹 Problem
Find all unique triplets in the array which give the sum of zero.

---

### 🔹 Brute Force
Check all triplets → O(n³)  
Very slow.

---

### 🔹 Optimized Approach (Sorting + Two Pointers)

1. Sort the array.
2. Fix one element.
3. Use two pointers to find remaining two elements.
4. Skip duplicates to avoid repeated answers.

---

### 🔹 Key Insight
After sorting:
- If nums[i] > 0 → break (no possible zero sum).
- Use two pointers to reduce time from O(n³) to O(n²).

---

### 🔹 Complexity
Time: O(n²)  
Space: O(1) (excluding output)

---

### 🔹 Why This Is Important?
This problem teaches:
- Two pointer technique
- Duplicate handling
- Pattern recognition