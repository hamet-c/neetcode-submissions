class Solution {
public:
    int reverse(int x) {
        string result;
        bool negative = false;
        if (x == 0 || x == INT_MIN) {
            return 0;
        }
        if (x < 0) {
            x = abs(x);
            negative = true;
        }
        while (x != 0) {
            int y = x % 10;
            string str = to_string(y);
            result.push_back(str.at(0));
            x = x / 10;
        }
        if (result.size() > 10) return 0;
        if (result.size() == 10 && result > "2147483647") return 0;
        int i = stoi(result, 0, 10);
        if (negative) {
            i *= -1;
        }
        return i;
    }
};
