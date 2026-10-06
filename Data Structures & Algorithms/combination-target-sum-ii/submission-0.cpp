class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> a;
        back(0, a, target, result, candidates);
        return result;
    }

private:
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
        // back(num, nums, target, result, candidates);
        // nums.pop_back();
        back(num + 1, nums, target, result, candidates);
        nums.pop_back();
        while (num + 1 < candidates.size() &&
               candidates[num + 1] == candidates[num]) {
            num = num + 1;
        }
        back(num + 1, nums, target, result, candidates);
        return;
    }
};
/* First Iteration candidates [2, 5, 2, 1, 2]
                                  ^
                                 num

            nums = [2] back call








*/