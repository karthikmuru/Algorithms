class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
                    
        unordered_map<int, int> x;
        int ans = 0;

        for(auto a : A) {
            for(auto b : B) {
                if(x[a + b] == 0) x[a + b] = 1;
                else x[a + b]++;
            }
        }
        
        for(auto c : C) {
            for(auto d : D) {
                if(x[-c-d] != 0) ans += x[-c-d];    
            }
        }
        
        return ans;
    }
};
