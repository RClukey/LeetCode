class Solution {
public:
    char findTheDifference(string s, string t) {
        int counts[26] = {0};

        for (int i = 0; i < s.size(); i++) counts[s[i] - 'a']--;
        for (int i = 0; i < t.size(); i++) counts[t[i] - 'a']++;

        for (int i = 0; i < 26; i++) if (counts[i]) return (i + 'a');
        return 'a';
    }
};
