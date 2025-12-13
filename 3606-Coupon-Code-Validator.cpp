class Solution {
public:
    static inline bool is_not_alnum(char ch)
    {
        return !(isalnum(ch) ||  ch == '_');
    }

    bool string_is_valid(const string &str)
    {
        return (find_if(str.begin(), str.end(), is_not_alnum) == str.end());
    }

    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<string> elec;
        vector<string> groc;
        vector<string> phar;
        vector<string> rest;

        for (int i = 0; i < code.size(); ++i)
        {
            string c = code[i], bL = businessLine[i];
            bool iA = isActive[i];

            if (c == "" || !iA) continue;
            
            if (!string_is_valid(c)) continue;

            if (bL == "electronics") elec.push_back(c);
            if (bL == "grocery") groc.push_back(c);
            if (bL == "pharmacy") phar.push_back(c);
            if (bL == "restaurant") rest.push_back(c);
        }
        sort(elec.begin(), elec.end());
        sort(groc.begin(), groc.end());
        sort(phar.begin(), phar.end());
        sort(rest.begin(), rest.end());

        vector<string> output;

        for (auto& c : elec) output.push_back(c);
        for (auto& c : groc) output.push_back(c);
        for (auto& c : phar) output.push_back(c);
        for (auto& c : rest) output.push_back(c);

        return output;
    }
};
