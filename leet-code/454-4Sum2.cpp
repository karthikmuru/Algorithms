class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
                    
        unordered_map<int, int> x;
        int ans = 0;

        for(auto a : A)
            for(auto b : B)
                x[a + b]++;
        
        for(auto c : C)
            for(auto d : D)
                ans += x[-c-d];    
        
        return ans;
    }
};
