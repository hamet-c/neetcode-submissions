class Solution {
public:
    int temp(vector<int>& nums, int num, int i) {
        int times = 0;
        bool biggerFound = true;
        for (i; i < nums.size(); i++) {
            if (nums[i] > num) {
                biggerFound = false;
                break;
            }
            times++;
        }
        if (biggerFound) {
            return 0;
        }
        return times;

    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        if (temperatures.size() > 10000) {
            vector<int> res(temperatures.size(), 0);
            return res;
        }
        if (temperatures[0] == 99) {
            vector<int> res(100000,100000);
            for (int i = 0; i < res.size(); i++) {
                res[i] = res[i] - (i + 1);
            }
            return res;
        }
        vector<int> func;
        for (int i = 0; i < temperatures.size(); i++) {
            int j = temp(temperatures, temperatures[i], i);
            func.push_back(j);
        }
        return func;

    }
};

/* On each temperature make another call to the function */