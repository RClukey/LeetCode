class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        const int n=happiness.size()-1;
        sort(happiness.begin(), happiness.end());
        
        long long sum=0;
        for(int i = 0; i < k; ++i){
            long long x = happiness[n-i]-i;
            if (x <= 0) break;
            sum += x;
        }
        return sum;
    }
};
