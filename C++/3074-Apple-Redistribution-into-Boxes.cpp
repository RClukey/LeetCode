class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total = accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.begin(), capacity.end());

        int count = 0;
        for (int i = capacity.size()-1; i >= 0; --i)
        {
            if (total <= 0) return count;
            total -= capacity[i];
            count++;
        }
        return count;
    }
};
