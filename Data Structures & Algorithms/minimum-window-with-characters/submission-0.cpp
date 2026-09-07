class Solution {
public:
    string minWindow(string s, string t) {
        if (t == "" || t.size() > s.size()) {
            return "";
        }
        unordered_map<char, int> mp;
        unordered_map<char, int> T;
        int res = -1;
        int resSize = INT_MAX;
        int l = 0;
        int have = 0;
        for (auto& x : t) {
            T[x]++;
            mp[x];
        }
        int need = T.size();
        for (int i = 0; i < s.size(); i++) {
            char curr = s[i];
            mp[curr]++;

            if (T.find(curr) != T.end() && mp[curr] == T[curr]) {
                have++;
            }
            while (have == need) {
                if (i - l + 1 < resSize) {
                    resSize = (i - l + 1);
                    res = l;
                }
                mp[s[l]]--;
                if (T.find(s[l]) != T.end() && mp[s[l]] < T[s[l]]) {
                    have--;
                }
                l++;
            }
        }
        if (res == -1) {
            return "";
        }
        return (s.substr(res, resSize));
    }
};