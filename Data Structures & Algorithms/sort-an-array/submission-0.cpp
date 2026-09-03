class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        class Test {
            public:
        void Merge(vector<int>& hi, int left, int middle, int right) {
            vector<int> L(hi.begin() + left, hi.begin() + middle + 1);
            vector<int> R(hi.begin() + middle + 1, hi.begin() + right + 1);
            int i = left;
            int k = 0;
            int j = 0;
            
            while (j < L.size() && k < R.size() ) {
                if (L.at(j) <= R.at(k)) {
                    hi.at(i) = L.at(j);
                    j++;
                }
                else {
                    hi.at(i) = R.at(k);
                    k++;
                }
                i++;
            }
            while (j < L.size()) {
                hi.at(i) = L.at(j);
                j++;
                i++;
            }
            while (k < R.size()) {
                hi.at(i) = R.at(k);
                k++;
                i++;
            }
        }
        
        void mergesort(vector<int>& mums, int left, int right) {
            if (left == right) {
                return;
            }
            int middle = (left + right) / 2;
            mergesort(mums, left, middle);
            mergesort(mums, middle + 1, right);
            Merge(mums, left, middle, right);
        }
        };
        Test t;
         t.mergesort(nums, 0, nums.size() - 1);
         return nums;
    }
};