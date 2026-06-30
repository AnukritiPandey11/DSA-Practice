//Moore's Voting Algorithm
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=nums[0];
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(cnt==0)
            {
                cnt=1;
                ele=nums[i];
            }
            else if(nums[i]==ele)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }

        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==ele)cnt++;

        }
        if(cnt>n/2)
        {
            return ele;
        }
        return 0;
        
    }
};
//LeetCode-169
//TC-O(2N) only if have to check the majority
//SC-O(1)