// Problem: Plus One
// LeetCode: https://leetcode.com/problems/plus-one/
// Difficulty: Easy
// Pattern: Array Simulation / Carry Handling
//
// Approach:
// Traverse digits from the end.
// If digit < 9, increment it and return.
// If digit = 9, set it to 0 and continue.
// If all digits become 0, insert 1 at the front.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {

            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        // If all digits were 9
        digits.insert(digits.begin(), 1);

        return digits;
    }
};