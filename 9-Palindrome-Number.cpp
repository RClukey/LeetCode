class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long palin = 0, number = x;
        while(number) {
            palin = palin * 10 + number % 10;
            number /= 10;
        }

        return palin == x;
    }
};
