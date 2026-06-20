#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        map<int,int> mpp;
        for(auto it: nums)
        {
            mpp[it]++;
        }
        int maxFreq=0;
        for(auto it: mpp)
        {
            if(maxFreq<it.second)
            {
                maxFreq=it.second;
                
            }
        }
        return maxFreq;
        
    }
};
//it is highest Frequency have to revisit leetcode prb 1838 after sliding window