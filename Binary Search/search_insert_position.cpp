// Problem: Search Insert Position
// LeetCode: https://leetcode.com/problems/search-insert-position/
// Difficulty: Easy
// Pattern: Binary Search
//
// Approach:
// Use binary search to find the target.
// If found, return its index.
// If not found, the 'low' pointer will indicate the correct insert position.
//
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return mid;

            else if (nums[mid] < target)
                low = mid + 1;

            else
                high = mid - 1;
        }

        // low is the correct insert position
        return low;
    }
};