class Solution {
public:
    bool isValid(string s) {
        stack<char> check;
        string m = "([{";
        unordered_map<char, char> f =  { {')', '('}, {']', '['}, {'}', '{'} };
        for (auto& x : s) {
            if (m.find(x) != string::npos) {
                check.push(x);
                
            }
            else {
                if (check.empty() || check.top() != f[x] ) {
                    return false;
                }
                check.pop();
            }
        }
        return check.empty();
    }
};