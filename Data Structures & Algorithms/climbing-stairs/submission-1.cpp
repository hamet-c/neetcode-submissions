class Solution {
public:
    int climbStairs(int n) {
        if (n == 2 || n == 1) {
            return n;
        }
        int one = 1;
        int two = 1;
        int temp;
        n = n - 2;
        while (n >= 0) {
            temp = two;
            two = one + two;
            one = temp;
            n--;
        }
        return two;
    }
};