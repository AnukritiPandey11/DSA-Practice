#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int maxsum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                sum=0;
            }
            if(nums[i]!=0)
            {
                sum=sum+1;
                maxsum=max(maxsum,sum);
            }        
        }
        return maxsum;
        
    }
};