// Problem: Longest Common Prefix
// LeetCode: https://leetcode.com/problems/longest-common-prefix/
// Difficulty: Easy
// Pattern: String Comparison
//
// Approach:
// Assume the first string is the prefix.
// Compare it with each string in the array.
// Reduce the prefix length until it matches.
//
// Time Complexity: O(n * m)
// n = number of strings
// m = length of shortest string
//
// Space Complexity: O(1)


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {

            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);

                if (prefix.empty())
                    return "";
            }
        }

        return prefix;
    }
};