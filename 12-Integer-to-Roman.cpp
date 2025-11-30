class Solution {
public:
    string intToRoman(int num) {
        string answer;
        string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        for (int i = 0; i < size(roman); ++i)
        {
            while (num >= val[i])
            {
                answer += roman[i];
                num -= val[i];
            }
        }
        return answer;
    }
};
