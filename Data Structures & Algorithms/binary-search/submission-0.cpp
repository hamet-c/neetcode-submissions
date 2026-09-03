class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int high = nums.size() - 1;
        int low = 0;
        int mid;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (nums.at(mid) == target) {
                return mid;
            }
            if (target > nums.at(mid)) {
                low = mid + 1;
            }
            if (target < nums.at(mid)) {
                high = mid - 1;
            }
        }

        return -1;
    }
};