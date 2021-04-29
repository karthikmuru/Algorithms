// Problem: https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxSoFar = nums[0], maxCurrent = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            maxCurrent = max(nums[i], nums[i] + maxCurrent);
            if(maxSoFar < maxCurrent) maxSoFar = maxCurrent;
        }
        
        return maxSoFar;
    }
};
