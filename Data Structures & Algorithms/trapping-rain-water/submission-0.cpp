class Solution {
public:
    int trap(vector<int>& height) {
        int amount = 0;
        vector<int> maxl;
        vector<int> maxr;
        vector<int> mini;
        int j = height.size() - 1;
        int mxright = 0;
        int mxleft = 0;
        for (int i = 0; i < height.size(); i++) {
            maxl.push_back(mxleft);
            maxr.push_back(mxright);

            mxleft = max(mxleft, height[i]);
            mxright = max(mxright, height[j]);
            j--;
        }
        reverse(maxr.begin(), maxr.end());
        for (int i = 0; i < maxl.size(); i++) {
            mini.push_back(min(maxl[i], maxr[i]));
        }
        for (int i = 0; i < height.size(); i++) {
            if ((mini[i] - height[i]) < 0) {
                continue;
            }
            amount += (mini[i] - height[i]);
        }
        return amount;
    }
};