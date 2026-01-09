class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if (timeSeries.empty()) return 0;

        int count = 0;
        for (int i = 0; i < timeSeries.size()-1; i++)
        {
            int interval = timeSeries[i+1]-timeSeries[i];
            count += min(duration, interval);
        }
        return count + duration;
    }
};
