class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int i;
    int j;
    bool check = false;
    for (i = 0; i < nums.size() ;i++) {
        for (j = 1; j < nums.size(); j++) {
            if (j == i) {
                continue;
            }
            if (nums.at(i) + nums.at(j) == target) {
                check = true;
                break;
            }
        }
        if (check) {
            return {i,j};
            break;
        }
    }
    return {};
    }
    
};