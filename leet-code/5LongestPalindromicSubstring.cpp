class Solution {
public:
    string longestPalindrome(string s) {
        
        int left = 0, right = 0;
        
        for(int i = 0; i < s.length(); i++) {
            int lenOdd = expandFromMiddle(s, i, i);
            int lenEven = expandFromMiddle(s, i, i + 1);
            int len = max(lenOdd, lenEven);
            
            if(len > right - left + 1) {
                left = i - ((len - 1) / 2);
                right = i + (len / 2);
            }
        }
        
        return s.substr(left, right - left + 1);
    }
    
    int expandFromMiddle(string s, int left, int right) {
        while(left >= 0 && right < s.length() && s[left] == s[right]) {
            left --;
            right ++;
        }
        return right - left - 1;
    }
};
