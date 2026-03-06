// Problem: Next Permutation
// LeetCode: https://leetcode.com/problems/next-permutation/
// Difficulty: Medium
// Pattern: Permutation / Greedy
//
// Approach:
// 1. Traverse from right and find the first index where nums[i] < nums[i+1].
//    This is called the breakpoint.
// 2. If no breakpoint exists, reverse the whole array.
// 3. Otherwise find the next greater element to the right of the breakpoint.
// 4. Swap them.
// 5. Reverse the suffix after the breakpoint.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();
        int index = -1;

        // Step 1: find breakpoint
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        // Step 2: if no breakpoint, reverse entire array
        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: find next greater element
        for (int i = n - 1; i > index; i--) {
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Step 4: reverse the suffix
        reverse(nums.begin() + index + 1, nums.end());
    }
};