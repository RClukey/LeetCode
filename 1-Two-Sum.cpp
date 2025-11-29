class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i) {
            int comp = target - nums[i];                // Determine the complement of each number in the vector
            if (hash.find(comp) != hash.end()) {        // If the complement is in the hash table
                return {hash[comp], i};
            }
            hash[nums[i]] = i;                          // Add hash to the table
        }
        // Return an empty vector if no solution is found
        return {};
    }
};
