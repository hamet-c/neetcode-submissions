class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        merged.insert(merged.end(), nums1.begin(), nums1.end());
        merged.insert(merged.end(), nums2.begin(), nums2.end());
        sort(merged.begin(), merged.end());
        int i = merged.size() / 2;
        if (merged.size() % 2 == 0) {
            return (float((merged.at(i) + merged.at(i - 1)) / 2.0));
        }
        else {
            return (merged.at(i));
        }
    }
};