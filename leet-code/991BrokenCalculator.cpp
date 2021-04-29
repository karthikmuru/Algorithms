// Problem: https://leetcode.com/problems/broken-calculator/

class Solution {
public:
    int brokenCalc(int X, int Y) {
        
        int ans = 0;
        
        while(X!=Y) { 
            
            if (Y <= X) return ((X - Y) + ans);
            if(Y % 2 == 0) Y /= 2;
            else Y ++;
            
            ans ++;
        }
        return ans;
    }
};
