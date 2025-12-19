class Solution {
public:
    int expand(string s, int l, int r) {
        while (l >= 0 && r < s.length() && s[l] == s[r]) {
            l--;
            r++;
        }
        return r - l - 1;
    } 

    string longestPalindrome(string s) {
        if (s.length() <= 1) return s;
        
        int start = 0;
        int end = 0;
        for (int i = 0; i < s.length(); i++) {
            int maximum = max(expand(s, i, i), expand(s, i, i + 1));

            if (maximum > end - start) {
                start = i - (maximum - 1) / 2;
                end = i + maximum / 2;
            }
        }

        return s.substr(start, end - start + 1);  
    } 
};
