// Problem: 3Sum
// LeetCode: https://leetcode.com/problems/3sum/
// Difficulty: Medium
// Pattern: Sorting + Two Pointers
//
// Approach:
// 1. Sort the array.
// 2. Fix one element.
// 3. Use two pointers to find pairs that sum to -nums[i].
// 4. Skip duplicates to avoid repeated triplets.
//
// Time Complexity: O(n^2)
// Space Complexity: O(1) (excluding output)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
         int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i=0;i<n;i++) {
            
            // If current number > 0, no possible triplet
            if (nums[i] > 0) break;

            // Skip duplicate elements
            if (i>0 && nums[i]==nums[i-1]) continue;

            int left=i+1;
            int right=n-1;

            while (left<right) {
                long long sum = (long long)nums[i]+nums[left]+nums[right];

                if (sum == 0) {
                    result.push_back({nums[i],nums[left],nums[right]});

                    left++;
                    right--;

                    // Skip duplicates
                    while (left<right && nums[left]==nums[left-1])left++;
                    while (left<right && nums[right]==nums[right+1])right--;
                }
                else if(sum<0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return result;
    }
};