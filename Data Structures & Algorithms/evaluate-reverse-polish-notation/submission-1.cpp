class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        if (tokens.size() == 1) {
            return stoi(tokens[0]);
        }
        int res = 0;
        stack<int> nums;
        int temp;
        for (int i = 0; i < tokens.size(); i++) {
            if (isdigit(tokens[i][0]) || (tokens[i].size() > 1)) {
                nums.push(stoi(tokens[i]));
            }
            else if (ispunct(tokens[i][0])) {
                int b = nums.top();
                nums.pop();
                int a = nums.top();
                if (tokens[i][0] == '+') {
                    res = a + b;
                    temp = a + b;
                } else if (tokens[i][0] == '-') {
                    res = a - b;
                    temp = a - b;
                } else if (tokens[i][0] == '*') {
                    res = a * b;
                    temp = a * b;
                } else if (tokens[i][0] == '/') {
                    res = a / b;
                    temp = a / b;
                }
                nums.top() = temp;
            }
        }
        return res;
    }
};
