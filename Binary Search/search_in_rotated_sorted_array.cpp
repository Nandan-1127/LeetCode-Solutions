// Problem: Search in Rotated Sorted Array
// LeetCode: https://leetcode.com/problems/search-in-rotated-sorted-array/
// Difficulty: Medium
// Pattern: Binary Search
//
// Approach:
// Use binary search while determining which half of the array is sorted.
// If left half is sorted, check if target lies within that range.
// Otherwise check the right half.
//
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return mid;

            // Left half is sorted
            if (nums[low] <= nums[mid]) {

                if (nums[low] <= target && target < nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }

            // Right half is sorted
            else {

                if (nums[mid] < target && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }

        return -1;
    }
};