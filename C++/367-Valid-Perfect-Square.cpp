class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
        
        int left = 2, right = num/2;
        while (left <= right)
        {
            long long mid = (right+left)/2;
            if (mid*mid == num) return true;
            if (mid*mid > num) right = mid-1;
            else left = mid+1;
        }
        return false;
    }
};
