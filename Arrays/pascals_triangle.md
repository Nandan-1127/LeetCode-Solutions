## Pascal's Triangle

### Problem
Generate the first `numRows` of Pascal's Triangle.

Each element is the sum of the two elements above it.

Example:

1  
1 1  
1 2 1  
1 3 3 1  

---

### Approach

Instead of computing factorials, we use:

C(n,r) = C(n,r-1) * (n-r+1) / r

This allows us to generate each row efficiently.

---

### Complexity

Time: O(n²)  
Space: O(n²)

---

### Key Concept

Pascal's Triangle represents **binomial coefficients**.