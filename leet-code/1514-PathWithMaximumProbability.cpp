// Problem : https://leetcode.com/problems/path-with-maximum-probability/
// Author  : Karthik Murugesan (github: @karthikmuru)

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        
        vector<vector<pair<int, double>>> e(n);
        
        for(int i = 0; i < edges.size(); i++) {
            e[edges[i][0]].emplace_back(edges[i][1], succProb[i]);
            e[edges[i][1]].emplace_back(edges[i][0], succProb[i]);            
        }
        
        priority_queue<pair<double, int>> current;
        vector<double> table(n, 0.0);
        vector<int> visited(n, 0);
        
        current.emplace(1.0, start);
        
        while(!current.empty()) {
            
            int node = current.top().second;
            double prob = current.top().first;
            visited[node] = 1;
            current.pop();
            
            if(node == end) return prob;
            
            for(auto x : e[node]){
                if(visited[x.first] || (x.second*prob) < table[x.first]) continue;
                current.emplace(table[x.first] = (x.second * prob), x.first);
            }
        }
        return 0;
    }
};
