#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
       for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                s1.push_back(tolower(s[i]));
            }
        
        }
        string rev = s1;
        reverse(rev.begin(), rev.end());

        return s1 == rev;
        
    }
};
//Leetcode problem 125