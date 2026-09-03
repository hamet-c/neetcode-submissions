class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
               sort(nums.begin(), nums.end());
        int prev;
        int i;
        for (i = 1; i < nums.size(); i++) {
            prev = nums.at(i - 1);
            if (nums.at(i) == prev) {
                return true;
            }
        }
        return false;
    } 
    
};