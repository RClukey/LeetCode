class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";

        string input = countAndSay(n - 1), output = "";
        int count = 0, size = input.size();
        char c = input[0];

        for (int i = 0; i < size; ++i)
        {
            if (input[i] == c) count++;
            else
            {
                output += to_string(count) + c;
                count = 1;
                c = input[i];
            }
            if (i == size-1) output += to_string(count) + c;
        }

        return output;
    }
};
