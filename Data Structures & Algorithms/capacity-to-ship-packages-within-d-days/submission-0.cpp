class Solution {
public:
    int scan(int rate, vector<int>& weights) {
        int day = 0;
        int cap = 0;
        for (int i = 0; i < weights.size(); i++) {
            if (cap + weights[i] > rate) {
                cap = 0;
                day++;
            }
            cap += weights[i];
        }
        if (cap > 0) {
            day++;
        }
        cout << cap << endl;
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);
        int mid = l + (r - l) / 2;
        int res = INT_MIN;
        while (l <= r) {
            int d = scan(mid, weights);
            if (d <= days) {
                res = mid;
                r = mid - 1;
                mid = l + (r - l) / 2;
            } else {
                l = mid + 1;
                mid = l + (r - l) / 2;
            }
        }

        return res;
    }
};