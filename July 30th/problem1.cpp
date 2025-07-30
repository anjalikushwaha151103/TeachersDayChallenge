// MAXIMUM SUBARRAY
//Statement - Given an integer array nums, find the subarray with the largest sum, and return its sum.
 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0];
        int currMax = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            currMax = max(nums[i], currMax + nums[i]);
            maxi = max(maxi, currMax);
        }
        
        return maxi;
    }
};
