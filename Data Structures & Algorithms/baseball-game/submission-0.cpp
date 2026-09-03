#include <cctype>
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score;
        int j = -1;
        for (int i = 0; i < operations.size(); i++) {
            if (operations.at(i) == "D") {
                score.push_back(score.at(score.size() - 1) * 2);
                j++;
                continue;
            }
            if (operations.at(i) == "C") {
                score.pop_back();
                j--;
                continue;
            }
            if (operations.at(i) == "+") {
                score.push_back(score.at(score.size() - 2) + score.back());
                continue;
            }
            if (true) {
                score.push_back(stoi(operations.at(i)));
                j++;
                continue;
            }

        }
        int sum = 0;
        for (int i = 0; i <score.size(); i++) {
            sum += score.at(i);
        }
        return sum;
    }
};