// Problem: Pascal's Triangle II
// LeetCode: https://leetcode.com/problems/pascals-triangle-ii/
// Difficulty: Easy
// Pattern: Combinatorics
//
// Approach:
// Use the binomial coefficient formula:
// C(n, r) = C(n, r-1) * (n - r + 1) / r
//
// This allows computing the next element from the previous one.
//
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int> row(rowIndex + 1);
        row[0] = 1;

        for (int i = 1; i <= rowIndex; i++) {

            long long value = (long long)row[i - 1] * (rowIndex + 1 - i);
            value /= i;

            row[i] = value;
        }

        return row;
    }
};