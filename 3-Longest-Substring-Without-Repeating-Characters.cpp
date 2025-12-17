class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        int maximum = 0, j = 0;
        unordered_map<char, int> map;

        for (int i = 0; i < s.length(); ++i)
        {
            map[s[i]]++;
            while (map[s[i]]>1)
            {
                map[s[j]]--;
                j++;
            }
            maximum = max(maximum, i-j+1);
        }
        return maximum;
    }
};
