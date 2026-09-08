class Solution {
public:
    void scan(int& l, int& r, vector<int>& nums, int& k, pair<int, int>& mx) {
        while (r - l + 1 != k) {
            if (nums[r] >= mx.first) {
                mx.first = nums[r];
                mx.second = r;
            }
            r++;
        }
        if (nums[r] >= mx.first) {
            mx.first = nums[r];
            mx.second = r;
        }
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if (nums.size() == 1) {
            return nums;
        }
        int l = 0, r = 0;
        vector<int> res;
        pair<int, int> mx = {nums[0], 0};
        scan(l, r, nums, k, mx);
        res.push_back(mx.first);

        while (r < nums.size() && l + k < nums.size()) {
            l++;
            r++;
            if (l > mx.second) {
                r = l;
                mx = {nums[l], l};
                scan(l, r, nums, k, mx);
            }
            if (nums[r] >= mx.first) {
                mx.first = nums[r];
                mx.second = r;
            }
            res.push_back(mx.first);
        }
        return res;
    }
};