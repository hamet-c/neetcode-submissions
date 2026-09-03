class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size() / 2;
        int stack = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums.at(i - 1) == nums.at(i)) {
                stack++;
                if (stack >= n) {
                    return nums.at(i);
                }
            }
        }
        return nums.at(0);
    }
};