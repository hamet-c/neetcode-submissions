class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> freq(nums.size() + 1);
        unordered_map<int, int> count = {};
        for (const auto& x : nums) {
            count[x]++;
        }
        for (const auto& [num, frequency] : count) {
            freq[frequency].push_back(num);
        }
        vector<int> result;
        for (int i = freq.size() - 1; i >= 0; i--) {
            for (const auto& j : freq[i]) {
                result.push_back(j);
                if (result.size() == k) {
                    return result;
                }
            }
        }
        return result;
    }
};