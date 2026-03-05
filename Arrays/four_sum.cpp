// Problem: 4Sum
// LeetCode: https://leetcode.com/problems/4sum/
// Difficulty: Medium
// Pattern: Sorting + Two Pointers
//
// Approach:
// 1. Sort the array.
// 2. Fix the first two numbers using two loops.
// 3. Use two pointers to find the remaining two numbers.
// 4. Skip duplicates to avoid repeated quadruplets.
//
// Time Complexity: O(n^3)
// Space Complexity: O(1) (excluding output)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> result;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {

            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n; j++) {

                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int left = j + 1;
                int right = n - 1;

                long long remaining = (long long)target - nums[i] - nums[j];

                while (left < right) {

                    long long sum = (long long)nums[left] + nums[right];

                    if (sum == remaining) {

                        result.push_back({nums[i], nums[j], nums[left], nums[right]});

                        left++;
                        right--;

                        while (left < right && nums[left] == nums[left - 1]) left++;
                        while (left < right && nums[right] == nums[right + 1]) right--;
                    }
                    else if (sum < remaining) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }

        return result;
    }
};