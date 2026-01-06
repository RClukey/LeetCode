class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream iss(s);
        vector<string> words;
        string word;
        
        while (iss >> word) words.push_back(word);
        if (pattern.size() != words.size()) return false;

        unordered_map<char, string> map;
        unordered_set<string> seen;

        for (int i = 0; i < pattern.size(); ++i)
        {
            char c = pattern[i];
            string w = words[i];

            if (map.count(c)) { if (map[c] != w) return false; }
            else
            {
                if (seen.count(w)) return false;
                map[c] = w;
                seen.insert(w);
            }
        }
        return true;
    }
};
