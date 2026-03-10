// Problem: Pascal's Triangle
// LeetCode: https://leetcode.com/problems/pascals-triangle/
// Difficulty: Easy
// Pattern: Mathematical Simulation / Combinatorics
//
// Approach:
// Each row of Pascal's triangle can be generated using the formula:
//
// C(n, r) = C(n, r-1) * (n - r + 1) / r
//
// This allows us to generate each row efficiently without computing factorials.
//
// Time Complexity: O(n^2)
// Space Complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {

private:

    vector<int> generateRow(int n) {

        vector<int> row;
        int value = 1;

        row.push_back(1);

        for (int i = 1; i < n; i++) {
            value = value * (n - i);
            value = value / i;
            row.push_back(value);
        }

        return row;
    }

public:

    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> triangle;

        for (int i = 1; i <= numRows; i++) {
            triangle.push_back(generateRow(i));
        }

        return triangle;
    }
};