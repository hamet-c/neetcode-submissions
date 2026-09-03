class Solution {
public:
    void reverseString(vector<char>& s) {
       int n = 1;
        for (int i = 0; i < s.size() / 2; i++) {
            char hold;
            hold = s.at(i);
            s.at(i) = s.at(s.size() - n);
            s.at(s.size() - n) = hold;
            n++;
        }
    }
};