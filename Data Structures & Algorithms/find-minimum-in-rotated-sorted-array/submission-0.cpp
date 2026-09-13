class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() <= 1) {
            return nums[0];
        }
        int low = 0;
        int high = nums.size() - 1;
        int mid = low + (high - low)/2;

        int res = 0;
        while (low < high) {
            if (nums[mid] <= nums[high]) {
                res = nums[mid];
                high = mid;
                mid = low + (high - low)/2;
            }
            else {
                low = mid + 1;
                mid = low + (high - low)/2;
            }

        }
        return nums[low];
    }
};