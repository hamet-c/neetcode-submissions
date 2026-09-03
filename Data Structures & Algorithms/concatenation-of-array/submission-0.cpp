class Solution {
public:
#include <algorithm>
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> doubl;
        doubl = nums;
        doubl.insert(doubl.end(), doubl.begin(), doubl.end());
        return doubl;
    }
};