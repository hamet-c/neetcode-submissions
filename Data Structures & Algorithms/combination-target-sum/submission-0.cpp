class Solution {
public:
    void back(int num, vector<int>& nums, int target,
              vector<vector<int>>& result, const vector<int>& candidates) {
        int val = accumulate(nums.begin(), nums.end(), 0);
        if (val == target) {
            result.push_back(nums);
            return;
        }
        if (val > target || num >= candidates.size()) {
            return;
        }
        nums.push_back(candidates[num]);
        back(num, nums, target, result, candidates);
        nums.pop_back();
        back(num + 1, nums, target, result, candidates);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> a;
        back(0, a, target, result, candidates);
        return result;
    }
};