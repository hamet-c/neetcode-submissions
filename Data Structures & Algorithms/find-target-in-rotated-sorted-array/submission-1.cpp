class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;

        while (low < high) {
            mid = low + (high - low) / 2;
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        int l = low;
        int r = nums.size() - 1;
        int m;
        high = low - 1;
        low = 0;
        if (target >= nums[l] && target <= nums[r]) {
            while (l <= r) {
                m = l + (r - l) / 2;
                if (nums[m] == target) {
                    return m;
                } else if (nums[m] > target) {
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            }
        } else {
            while (low <= high) {
                mid = low + (high - low) / 2;
                if (nums[mid] == target) {
                    return mid;
                } else if (nums[mid] > target) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }
        return -1;
    }
};