// Problem: Maximum Subarray
// LeetCode: https://leetcode.com/problems/maximum-subarray/
// Difficulty: Medium
// Pattern: Kadane's Algorithm / Dynamic Programming
//
// Approach:
// Use Kadane's Algorithm.
// Keep track of the current subarray sum.
// If the sum becomes negative, reset it to 0.
//
// Time Complexity: O(n)
// Space Complexity: O(1)


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int currentSum = 0;
        int maxSum = INT_MIN;

        for (int num : nums) {

            currentSum += num;

            maxSum = max(maxSum, currentSum);

            if (currentSum < 0)
                currentSum = 0;
        }

        return maxSum;
    }
};