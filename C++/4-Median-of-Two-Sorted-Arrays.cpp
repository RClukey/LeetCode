class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int t = n+m;

        vector<int> merged;
        for (int i = 0; i < n; ++i) merged.push_back(nums1[i]);
        for (int i = 0; i < m; ++i) merged.push_back(nums2[i]);
        sort(merged.begin(), merged.end());

        if (t%2 == 1) return static_cast<double>(merged[t/2]);
        int mid1 = merged[t/2 - 1], mid2 = merged[t/2];
        return (static_cast<double>(mid1+mid2))/2;
    }
};
