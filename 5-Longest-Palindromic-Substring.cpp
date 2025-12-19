class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 1) return s;

        string tempStr = "^#";
        for (char c : s) {
            tempStr += c;
            tempStr += '#';
        }
        tempStr += "$";

        int n = tempStr.size();
        vector<int> palinRadii(n, 0);
        int palinCenter = 0, palinRadius = 0;

        for (int i = 1; i < n-1; ++i) {
            palinRadii[i] = (palinRadius > i) ? min(palinRadius - i, palinRadii[2*palinCenter - i]) : 0;
            while (tempStr[i + 1 + palinRadii[i]] == tempStr[i - 1 - palinRadii[i]])
                palinRadii[i]++;

            if (i + palinRadii[i] > palinRadius) {
                palinCenter = i;
                palinRadius = i + palinRadii[i];
            }
        }

        int max_len = *max_element(palinRadii.begin(), palinRadii.end());
        int center_index = distance(palinRadii.begin(), find(palinRadii.begin(), palinRadii.end(), max_len));
        return s.substr((center_index - max_len) / 2, max_len);
    }
};
