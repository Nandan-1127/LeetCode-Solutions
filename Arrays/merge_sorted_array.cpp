// Problem: Merge Sorted Array
// LeetCode: https://leetcode.com/problems/merge-sorted-array/
// Difficulty: Easy
// Pattern: Two Pointers
//
// Approach:
// Use two pointers starting from the end of both arrays.
// Place the larger element at the end of nums1.
//
// Time Complexity: O(m + n)
// Space Complexity: O(1)


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1;        // pointer for nums1
        int j = n - 1;        // pointer for nums2
        int k = m + n - 1;    // last position in nums1

        while (i >= 0 && j >= 0) {

            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }
            else {
                nums1[k] = nums2[j];
                j--;
            }

            k--;
        }

        // Copy remaining elements of nums2
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};