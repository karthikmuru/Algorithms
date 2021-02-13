// Problem : https://leetcode.com/problems/single-number-iii/
// Author  : Karthik Murugesan (github: @karthikmuru)

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int> ans;
        int i = 0;

        sort(nums.begin(), nums.end());
        
        while(i < nums.size() - 1) {
                
            if(nums[i] == nums[i + 1]) i += 1;
            else ans.push_back(nums[i]);
                
            i += 1;
        }
        
        if(i == nums.size() - 1) ans.push_back(nums.back());
        
        return ans;
    }
};
