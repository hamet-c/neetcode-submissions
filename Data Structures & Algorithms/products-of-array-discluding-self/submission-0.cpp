class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        vector<int> second;
        if (accumulate(nums.begin(), nums.end(), 1, multiplies<int>()) != 0) {
            int sum = accumulate(nums.begin(), nums.end(), 1, multiplies<int>());
            for (int i = 0; i < nums.size(); i++) {
                int temp = sum / nums[i];
                nums[i] = temp;
            }
            return nums;
        }
        for (int i = 0; i < nums.size(); i++) {
            if ((i + 1 < nums.size() ) && nums.at(i + 1) == 0) {
                answer.push_back(0);
                continue;
            }
            second = nums;
            second.erase(second.begin() + i);
            int product = accumulate(second.begin(), second.end(), 1, multiplies<int>());
            answer.push_back(product);
        }
        return answer;
    }
};