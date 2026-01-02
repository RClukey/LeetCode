class Solution {
public:
    int countCollisions(string directions) {
        int result = 0, flag = -1;
        
        for (char ch : directions)
        {
            if (ch == 'L' && flag >= 0)
            {
                result += flag + 1;
                flag = 0;
            }
            else if (ch == 'S')
            {
                if (flag > 0) result += flag;
                flag = 0;
            }
            else if (ch == 'R')
            {
                if (flag < 0) flag = 1;
                else flag++;
            }
        }
        return result;
    }
};
