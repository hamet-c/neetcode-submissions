class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int x = 0;
        int m = 0;
        for (auto& y: nums) {
            if (y == 1) {
                x++;
                m = max(x, m);
            }
            else x = 0;
        }
        return m;
        
    }
};