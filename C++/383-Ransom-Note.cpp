class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size()) return false;

        unordered_map<char, int> counts;

        for (char c : magazine) counts[c]++;
        for (char c : ransomNote)
        {
            counts[c]--;
            if (counts[c] < 0) return false;
        }
        return true;
    }
};
