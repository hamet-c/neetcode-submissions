class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size(); i++) {
            if (!(isalnum(s.at(i)))) {
                s.erase(i, 1);
                i--;
            } else if ((islower(s.at(i)))) {
                s.at(i) = toupper(s.at(i));
            }
        }
        string a = s;
        reverse(s.begin(), s.end());
        if (a == s) {
            return true;
        }
        return false;
    }
};