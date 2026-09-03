class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for (int i = 0; i < bills.size(); i++) {
            int change = bills[i] - 5;
            if (bills[i] == 5) {
                five++;
            }
            if (bills[i] == 10) {
                ten++;
            }
            if (change == 5) {
                if (five > 0) {
                    five -= 1;
                } else {
                    return false;
                }
            } else if (change == 15) {
                if (five > 0 && ten >> 0) {
                    five--;
                    ten--;
                } else if (five >= 3) {
                    five -= 3;
                } else
                    return false;
            }
        }
        return true;
    }
};