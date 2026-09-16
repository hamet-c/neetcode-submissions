class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>, less<int>> pq;
        for (auto& x: stones) {
            pq.push(x);
        }
        while (pq.size() > 1) {
            int stone1 = pq.top();
            pq.pop();
            int stone2 = pq.top();
            pq.pop();
            cout << stone1 << " " << stone2 << endl;
            if (stone2 == stone1) {
                continue;
            }
        /*    else if (pq.top() > stone1) {
                pq.push(stone2 - stone1);
            } */
            else {
                pq.push(stone1 - stone2);
            }
        }
        if (pq.size() == 0) return 0;
        return pq.top();
    }
};