// Problem : https://leetcode.com/problems/find-the-difference/
// Author  : Karthik Murugesan (github: @karthikmuru)

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        const int MAXCHAR = 26;
        
        int charCount[MAXCHAR] = {0};
        
        for(auto i : s)
            charCount[i - 'a']++;
        
        for(auto i : t)
            charCount[i - 'a']++;
 
        for(int i = 0; i < MAXCHAR; i++) {
            if(charCount[i] % 2 != 0) return (char)(i + 'a');
        }
        
        return ' ';
    }
};
