class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreacher = 0;
        for (int i = 0; i < nums.size();i++) {
            if (i > maxreacher) {
                return false;
            }
            maxreacher = max(maxreacher, i + nums.at(i));
        }
        return true;
    }
};
