class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        /*Calculate max from right to left, get the maximum from the right but then also change the value before changing the current max*/
         int rep = arr[arr.size() - 1];
         int temp;
        for (int i = arr.size() - 1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = rep;
            rep = max(rep, temp);
            
        }
        arr.back() = -1;
        return arr;
    }
};