class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> out;
        if (words.empty()) return out;

        string first = "qwertyuiop", second = "asdfghjkl", third = "zxcvbnm";
        bool first_found, second_found, third_found;
        for (string w : words)
        {
            first_found = false; second_found = false; third_found = false;
            for (char c : w)
            {
                if (find(first.begin(), first.end(), tolower(c)) != first.end()) first_found = true;
                else if (find(second.begin(), second.end(), tolower(c)) != second.end()) second_found = true;
                else if (find(third.begin(), third.end(), tolower(c)) != third.end()) third_found = true;
            }
            if ((first_found && second_found) ||
                (first_found && third_found) ||
                (second_found && third_found)) continue;
            out.push_back(w);
        }
        return out;
    }
};
