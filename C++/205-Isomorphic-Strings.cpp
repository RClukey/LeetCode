class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> charMap;

        for (int i = 0; i < s.length(); ++i)
        {
            if (charMap.count(s[i]) && charMap[s[i]] != t[i]) return false;
            else if (charMap.count(s[i])) ;
            else
            {
                for (auto& pair : charMap)  if (pair.second == t[i])  return false;
                charMap[s[i]] = t[i];
            }
        }
        return true; 
    }
};
