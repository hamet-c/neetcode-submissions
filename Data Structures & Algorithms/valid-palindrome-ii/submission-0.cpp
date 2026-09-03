class Solution {
public:
    bool validPalindrome(string s) {
        bool pali = true;
        int i;
        int j = s.size();
        for (i = 0; i < s.size() / 2; i++) {
            j--;
            if (s.front() != s.back()) {
                pali = false;
                break;
            }
            if (s.at(i) != s.at(j)) {
                pali = false;
                break;
            }
        }
        if (pali) {
            return true;
        }
        pali = false;
        int amount;
        for (i = 0; i < s.size(); i++) {
            amount = 0;
            string v = s;
            v.erase(i, 1);
            j = v.size();
            for (int l = 0; l < v.size() / 2; l++) {
                cout << v << endl;
            j--;
            if (v.at(l) != v.at(j)) {
                pali = false;
                break;
            }
            else {
                amount++;
            }
            }
            if (amount == v.size() / 2) {
                return true;
            }
        }
        if (pali) {
            return true;
        }
        return false;
    }
};