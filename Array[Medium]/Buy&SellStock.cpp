//LeetCode-121
//TC-O(N)
//SC-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int mini=INT_MAX;
        int minindx=0;
        int prof,maxprof=0;
        for(int i=0;i<n;i++)
        {
            if(prices[i]<mini)
            {
                mini=prices[i];
                minindx=i;
            }
            prof=prices[i]-mini;
            if(maxprof<prof && i>minindx)
            {
                maxprof=prof;
            }
        }
        return maxprof;
    }
};