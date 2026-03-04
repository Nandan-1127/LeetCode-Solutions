// Problem: Remove Duplicates from Sorted Array
// LeetCode: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Difficulty: Easy
// Pattern: Two Pointers
//
// Approach:
// Since the array is sorted, duplicates appear consecutively.
// Use two pointers:
// - i tracks the position of the last unique element
// - j scans the array
//
// When nums[j] != nums[i], move the unique element forward.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i = 0;
        int n = nums.size();

        for (int j=1;j<n;j++) {
            if (nums[j]!=nums[i]) {
                i++;
                nums[i]=nums[j];
            }
        }

        return i+1;
    }
};