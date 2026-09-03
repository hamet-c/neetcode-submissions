class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        int j = 0;
        int smallest = strs.at(0).size();
        for (int i = 0; i < strs.size(); i++) {
            if (smallest > strs.at(i).size()) {
                smallest = strs.at(i).size();
            }
        }
        for (int i = 0; i < strs.size(); i++) {
            strs.at(i).resize(smallest);
        }
        for (int i = 1; i < strs.size();) {
            if (strs.at(i - 1) != strs.at(i)) {
                for (j = 0; j <strs.size(); j++) {
                    strs.at(j).pop_back();
                }
            }
            else {
                i++;
            }
        }
        prefix = strs.at(0);
        return prefix;
    }
};