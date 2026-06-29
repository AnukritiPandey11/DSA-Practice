//Leetcode-1
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<long long  ,int> hash;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=nums[i];
            int need=target-a;
            if(hash.find(need)!=hash.end())
            {
                ans.push_back(i);
                ans.push_back(hash[need]);
                return ans;
            }
            hash[a]=i;
        }   
     return ans;   
    }
};
