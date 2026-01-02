class Solution {
public:
    int number(char a) {
        switch (a)
        {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    int romanToInt(string s) {
        int answer = 0;
        for (int i = 0; i < s.size(); i++)
        {
            answer = (i+1 < s.size() && number(s[i]) < number(s[i+1])) ? answer - number(s[i]) : answer + number(s[i]);
        }
        return answer;
    }
};
