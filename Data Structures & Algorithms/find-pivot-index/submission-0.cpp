class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int pivot = 0;
        while (pivot < nums.size()) {
            left = accumulate(nums.begin(), nums.begin() + pivot, 0);
            right = accumulate(nums.begin() + pivot + 1, nums.end(), 0);
            if (left == right) {
                return pivot;
            }
            pivot++;
        }
        return -1;
    }
};