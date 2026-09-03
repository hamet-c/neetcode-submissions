class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int l = 0;
        int res = 0;
        for (int r = 0; r < s.size(); r++) {
            mp[s[r]]++;
            auto it = max_element(mp.begin(), mp.end(),[](const auto& a, const auto& b) {
            return a.second < b.second;
            }   );
            while (((r - l + 1) - (it->second)) > k) {
                mp[s[l]]--;
                l++;
            it = max_element(mp.begin(), mp.end(),[](const auto& a, const auto& b) {
            return a.second < b.second;
            }   );
            }
            res = max(res, r - l + 1);
        }
        return res;
    }
};