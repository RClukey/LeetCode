class Solution {
public:
    bool checkRecord(string s) {
        int Acount = 0, Lcount = 0;
        for (char c : s)
        {
            if (c == 'L')
            {
                Lcount++;
                if (Lcount >= 3) return false;
                continue;
            }
            if (c == 'A') Acount++;
            Lcount = 0;
        }
        if (Acount >= 2) return false;
        return true;
    }
};
