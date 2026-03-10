// Problem: Search in Rotated Sorted Array II
// LeetCode: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
// Difficulty: Medium
// Pattern: Modified Binary Search
//
// Approach:
// Perform binary search but handle duplicates.
// If nums[mid] == nums[low] == nums[high],
// shrink the search space from both ends.
//
// Time Complexity:
// Average: O(log n)
// Worst case: O(n)
//
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return true;

            // Handle duplicates
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
                continue;
            }

            // Left half sorted
            if (nums[low] <= nums[mid]) {

                if (nums[low] <= target && target < nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }

            // Right half sorted
            else {

                if (nums[mid] < target && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }

        return false;
    }
};