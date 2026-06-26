#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
//TC-O(N)
//SC->O(1)
/*class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp=nums[0];
        int i;
        int j;
        for(i=0;i<k;i++)
        {
            int temp=nums[0];
            for(j=0;j<nums.size()-1;j++)
            {
                int num=nums[j+1];
                nums[j+1]=temp;
                temp=num;
            }
            nums[0]=temp;
        }
        
    }
};
TC->O(k*N)
SC->O(1)*/