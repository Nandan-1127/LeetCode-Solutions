// Problem: Two Sum
// LeetCode: https://leetcode.com/problems/two-sum/
// Difficulty: Easy
// Pattern: Hashing
//
// Approach:
// Use a hash map to store previously seen numbers and their indices.
// For each element, check if (target - current element) exists in the map.
// If found, return indices.
//
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        int n = nums.size();

        for (int i=0;i<n;i++) {
            int remaining = target-nums[i];

            // check if complement exists
            if (seen.find(remaining) != seen.end()) {
                return {seen[remaining], i};
            }

            // store current value with index
            seen[nums[i]] = i;
        }

        return {}; // no solution
    }
};