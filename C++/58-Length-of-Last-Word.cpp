class Solution {
public:
    int lengthOfLastWord(string s) {
        bool space = false;
        int count = 0;

        for (char c : s)
        {
            if (c == ' ') space = true;
            else
            {
                if (space)
                {
                    space = false;
                    count = 0;
                }
                count++;
            }
        }
        return count;
    }
};
