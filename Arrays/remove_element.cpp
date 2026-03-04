// Problem: Remove Element
// LeetCode: https://leetcode.com/problems/remove-element/
// Difficulty: Easy
// Pattern: Two Pointers
//
// Approach:
// Traverse the array and keep track of the position where the next
// valid element should be placed. If the current element is not equal
// to 'val', move it to index k and increment k.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int k = 0; // position to place next valid element
        int n = nums.size();

        for (int i=0;i<n;i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};