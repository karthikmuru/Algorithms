class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        
        int N = A.size();
            
        unordered_map<int, int> x, y;
        
        x = sumList(A, B);
        y = sumList(C, D);

        int ans = 0;    
        for(auto i: x) {
            if(y[-i.first] != 0) {
                ans += i.second * y[-i.first];
            }
        }
        
        return ans;
    }
    
    unordered_map<int, int> sumList(vector<int>& p, vector<int>& q) {
        
        unordered_map<int, int> temp;
        int key;
        
        for(int i = 0; i < p.size(); i++) {
            for(int j = 0; j < q.size(); j++) {
                key = p[i] + q[j];
                if(temp.find(key) == temp.end()) {
                    temp[key] = 1;
                }
                else {
                    temp[key]++;
                }
            }
        }
        
        return temp;
    }
};
