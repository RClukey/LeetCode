class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        long long count = 0, sum = 0;
        unordered_map<int, int> map;

        for (vector<int>& point : points) map[point[1]]++;
        
        for (auto& [_, num] : map)
        {
            long long edge = (long long)num * (num - 1) / 2;
            count += edge * sum;
            sum += edge;
        }
        return count % 1000000007;
    }
};
