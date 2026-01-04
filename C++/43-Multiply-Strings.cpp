class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        
        vector<int> out(num1.size()+num2.size(), 0);

        for (int i = num1.size()-1; i >= 0; i--)
        {
            for (int j = num2.size()-1; j >= 0; j--)
            {
                out[i + j + 1] += (num1[i]-'0') * (num2[j]-'0');
                out[i + j] += out[i + j + 1] / 10;
                out[i + j + 1] %= 10;
            }
        }

        int i = 0;
        string ans = "";
        while (out[i] == 0) i++;
        while (i < out.size()) ans += to_string(out[i++]);
        
        return ans;
    }
};
