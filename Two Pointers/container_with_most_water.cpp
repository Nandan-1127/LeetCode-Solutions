// Problem: Container With Most Water
// LeetCode: https://leetcode.com/problems/container-with-most-water/
// Difficulty: Medium
// Pattern: Two Pointers
//
// Approach:
// Use two pointers at the beginning and end of the array.
// Calculate the area formed by the two heights.
// Move the pointer with the smaller height inward,
// since the smaller height limits the area.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {

            int width = right - left;
            int h = min(height[left], height[right]);

            maxArea = max(maxArea, width * h);

            // Move pointer with smaller height
            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return maxArea;
    }
};