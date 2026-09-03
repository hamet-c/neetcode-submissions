class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() < 1) {
            return 0;
        }
        set<int> set(nums.begin(), nums.end());
        int mx = 0;
        for (auto& x: set) {
            if (set.count(x - 1)) {
                continue;
            }
            int high = 1;
            while (set.count(x + high)) {
                high++;
            }
            mx = max(mx, high);
        }
        return mx;
    }
};