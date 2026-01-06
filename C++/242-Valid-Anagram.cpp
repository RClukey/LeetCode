class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        int counts[26];
        for (char c : s) counts[c - 'a']++;
        for (char c : t) counts[c - 'a']--;
        for (int i = 0; i < 26; i++) if (counts[i]) return false;
        return true;
    }
};
