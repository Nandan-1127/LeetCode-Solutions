// Problem: Spiral Matrix
// LeetCode: https://leetcode.com/problems/spiral-matrix/
// Difficulty: Medium
// Pattern: Matrix Traversal
//
// Approach:
// Use four boundaries:
// top, bottom, left, right.
//
// Traverse the matrix layer by layer:
// 1. left → right
// 2. top → bottom
// 3. right → left
// 4. bottom → top
//
// After each traversal, shrink the boundaries.
//
// Time Complexity: O(m * n)
// Space Complexity: O(1) (excluding output)


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();

        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;

        vector<int> result;

        while (top <= bottom && left <= right) {

            // left → right
            for (int i = left; i <= right; i++)
                result.push_back(matrix[top][i]);
            top++;

            // top → bottom
            for (int i = top; i <= bottom; i++)
                result.push_back(matrix[i][right]);
            right--;

            // right → left
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    result.push_back(matrix[bottom][i]);
                bottom--;
            }

            // bottom → top
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    result.push_back(matrix[i][left]);
                left++;
            }
        }

        return result;
    }
};