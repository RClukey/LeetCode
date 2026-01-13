class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() <= 1) return true;

        bool cap = isupper(word[0]), secondcap = isupper(word[1]);
        if (!cap && secondcap) return false;

        for (int i = 2; i < word.size(); i++)
        {
            if (cap && secondcap && !isupper(word[i])) return false;
            if (cap && !secondcap && isupper(word[i])) return false;
            if (!cap && isupper(word[i])) return false;
        }
        return true;
    }
};
