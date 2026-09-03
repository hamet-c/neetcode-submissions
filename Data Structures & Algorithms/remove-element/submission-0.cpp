class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(), nums.end());
        int begin = 0;
        int end = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == val) {
            nums.erase(nums.begin() + i);
            i--;
            }
        }
        return nums.size();
    }
};