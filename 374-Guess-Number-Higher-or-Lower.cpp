/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i = 1, j = n, m;
        while (i <= j)
        {
            m = i+(j-i)/2;
            if (guess(m) == 0) return m;
            if (guess(m) == -1) j = m-1;
            else i = m+1;
        }
        return -1;
    }
};
