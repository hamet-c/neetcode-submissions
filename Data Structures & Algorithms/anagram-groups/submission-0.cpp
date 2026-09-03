class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> secondHash;
        vector<vector<string>> returns;


        for (auto &s : strs) {
            string temp = s;
            sort(s.begin(), s.end());
            secondHash[s].push_back(temp);
        }

        for (auto &x : secondHash) {
            returns.push_back(x.second);
        }
        return returns;
    }
};