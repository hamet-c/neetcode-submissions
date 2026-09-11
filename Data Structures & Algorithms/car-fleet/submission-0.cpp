class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> ps;
        stack<int> a;
        for (int i = 0; i < position.size(); i++) {
            ps.push_back({position[i], speed[i]});
        }
        vector<double> time;
        sort(ps.begin(), ps.end());

        for (auto& x: ps) {
            time.push_back((double)(target - x.first)/x.second);
            cout << x.first << " " << x.second << endl;
        }
        int res = 0;
        int r = 0;
        double top = INT_MIN;
        for (int i = time.size() - 1; i >= 0; i--) {
            if (time[i] > top) {
                a.push(time[i]);
                top = time[i];
            }

        }
        return a.size();
    }
};