class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one = 0;
        int two = 0;
        int three = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == 0) {
                one++;

            }
            if (nums.at(i) == 1) {
                two++;
            }
            if (nums.at(i) == 2) {
                three++;
            }
        }
        int i = 0;
        while (one != 0) {
            nums.at(i) = 0;
            i++;
            one--;
        }
        while (two != 0) {
            nums.at(i) = 1;
            i++;
            two--;
        }
        while (three != 0) {
            nums.at(i) = 2;
            i++;
            three--;
        }
    } 
};