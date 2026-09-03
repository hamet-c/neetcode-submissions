class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums.at(i - 1) == nums.at(i)) {
                return nums.at(i);
            }
        }
        return 0;
    }
};