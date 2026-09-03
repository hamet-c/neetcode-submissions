class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = 1;
        int high = 0;
        while (j < prices.size()) {
            if (prices.at(j) < prices.at(i)) {
                i = j;
            } else {
                high = max(high, prices.at(j) - prices.at(i));
            }
            j++;
        }
        return high;
    }
};