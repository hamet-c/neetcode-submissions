class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sums;
        int i = 0;
        int j = numbers.size() - 1;

        while (i != j) {
            int search = numbers.at(i) + numbers.at(j);
            if (search > target) {
                j--;
                continue;
            }
            else if (search < target ) {
                i++;
                continue;
            }
            if (search == target) {
            sums.push_back(i);
            sums.push_back(j);
            break;
            }
        }
        sums.at(0)++;
        sums.at(1)++;
        return sums;
    }
    

};
