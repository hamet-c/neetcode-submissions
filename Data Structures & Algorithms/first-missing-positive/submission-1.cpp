class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int pos;
        bool hi = false;
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) < 1) {
                pos = i;
                hi = true;
            }
        }
            if (hi) {
                    pos++;
            nums.erase(nums.begin(), nums.begin() + pos);
            }
            for (int i = 1; i < nums.size(); i++) {
                if (nums.at(i - 1) == nums.at(i)) {
                    nums.erase(nums.begin() + (i - 1));
                    i--;
                }
            }
            int i = 0;
            int j = 1;
            int size = nums.size();
            while (i < nums.size()) {
                if (nums.at(i) == j) {
                    i++;
                    j++;
                    continue;
                }
                else {
                    return (j);
                }

            }
            return size + 1;
        }
};