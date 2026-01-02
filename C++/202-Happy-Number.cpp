class Solution {
private:
    int nextNumber(int n){
        int newNum = 0;
        while (n)
        {
            int dig = n % 10;
            newNum += dig*dig;
            n = n/10;
        }
        return newNum;
    }
public:
    bool isHappy(int n) {
        int slowPointer = n;
        int fastPointer = nextNumber(n);
        while (fastPointer != 1 && fastPointer != slowPointer)
        {
            slowPointer = nextNumber(slowPointer);
            fastPointer = nextNumber(nextNumber(fastPointer));
        }
        return fastPointer==1;
    }
};
