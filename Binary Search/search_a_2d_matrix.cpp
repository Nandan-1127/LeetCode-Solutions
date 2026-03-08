// Problem: Search a 2D Matrix
// LeetCode: https://leetcode.com/problems/search-a-2d-matrix/
// Difficulty: Medium
// Pattern: Binary Search
//
// Approach:
// Treat the matrix as a sorted 1D array.
// Perform binary search from index 0 to m*n - 1.
// Convert 1D index to 2D index using:
// row = mid / n
// col = mid % n
//
// Time Complexity: O(log(m * n))
// Space Complexity: O(1)


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();

        int low = 0;
        int high = m * n - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int row = mid / n;
            int col = mid % n;

            if (matrix[row][col] == target)
                return true;

            else if (matrix[row][col] < target)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return false;
    }
};