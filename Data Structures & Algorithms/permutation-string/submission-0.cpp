class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }
        unordered_map<char, int> one;
        unordered_map<char, int> two;
        for (auto& x : s1) {
            one[x]++;
        }
        for (int i = 0; i < s2.size() - s1.size() + 1; i++) {
            two.clear();
            for (int j = i; j < i + s1.size(); j++) {
                two[s2[j]]++;
            }
            if (one == two) {
                return true;
            }
        }
        return false;
    }
};