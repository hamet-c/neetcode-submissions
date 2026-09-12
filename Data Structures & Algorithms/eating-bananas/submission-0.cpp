class Solution {
public:
    long long rateCheck(int rate, vector<int> piles) {
        long long res = 0;
        for (int i = 0; i < piles.size(); i++) {
            res += ceil(static_cast<double>(piles[i]) / rate);
        }
        return res;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxx = *max_element(piles.begin(), piles.end());
      /*  vector<int> perH;
        for (int i = 1; i <= maxx; i++) {
            perH.push_back(i);
        } */
        long l = 1, r = maxx;
        long mid = l + (r - l)/2;
        long lowest = INT_MAX;
        while (l <= r) {
            long long hours = rateCheck(mid, piles);
            if (hours <= h) {
                if (lowest > mid) {

                 lowest = mid;
                }
                r = mid - 1;
                mid = l + (r - l)/2;
            }
            else {
                l = mid + 1;
                mid = l + (r - l)/2;
            }
        }
        return lowest;
    }
};