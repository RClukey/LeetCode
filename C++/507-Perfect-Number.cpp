class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;

        int sum = 1;
        int root = (sqrt(num));
        for (int i = 2; i <= root; ++i)
        {
            if (!(num % i))
            {
                int pair = num / i;
                if (i == pair) sum += i;
                else sum += i + pair;
            }
        }
        return sum == num;
    }
};
