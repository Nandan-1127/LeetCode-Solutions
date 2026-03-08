// Problem: Merge Intervals
// LeetCode: https://leetcode.com/problems/merge-intervals/
// Difficulty: Medium
// Pattern: Interval Merging / Sorting
//
// Approach:
// 1. Sort intervals based on start time.
// 2. Traverse intervals.
// 3. If current interval overlaps with the last merged interval,
//    update the end value.
// 4. Otherwise add a new interval.
//
// Time Complexity: O(n log n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<vector<int>> result;

        sort(intervals.begin(), intervals.end());

        for (auto& interval : intervals) {

            if (result.empty() || result.back()[1] < interval[0]) {
                result.push_back(interval);
            }
            else {
                result.back()[1] = max(result.back()[1], interval[1]);
            }
        }

        return result;
    }
};