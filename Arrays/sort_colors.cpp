// Problem: Sort Colors
// LeetCode: https://leetcode.com/problems/sort-colors/
// Difficulty: Medium
// Pattern: Dutch National Flag Algorithm
//
// Approach:
// Use three pointers: low, mid, high.
// - If nums[mid] == 0 → swap with low
// - If nums[mid] == 1 → move mid
// - If nums[mid] == 2 → swap with high
//
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {

            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};