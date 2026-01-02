class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        int res = 0, n = events.size();
        
        sort(events.begin(), events.end(), [](auto& a, auto& b) {
            return (a[0] == b[0]) ? (a[1] < b[1]) : (a[0] < b[0]); });
        
        vector<int> start(n, 0), suffix(n, events.back()[2]);
        for (int i = 0; i < n; ++i) start[i] = events[i][0];
        
        for (int i = n-2; i >= 0; --i) suffix[i] = max(suffix[i + 1], events[i][2]);
        
        for (int i = 0; i < n; ++i)
        {
            int idx = lower_bound(start.begin(), start.end(), events[i][1] + 1) - start.begin();
            int value = (idx < n) ? (events[i][2] + suffix[idx]) : (events[i][2]);
            res = max(res, value);
        }
        
        return res;
    }
};
