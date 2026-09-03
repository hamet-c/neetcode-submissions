class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = 0;
        int j = 0;
        vector<int> nums3;
        while (i < m) {
            nums3.push_back(nums1.at(i));
            i++;
        }
        for (j; j < n; j++) {
            nums3.push_back(nums2.at(j));
        }
        sort(nums3.begin(), nums3.end());
        nums1 = nums3;
    }
};