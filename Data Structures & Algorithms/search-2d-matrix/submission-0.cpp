class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int left = 0;
        int right = matrix.size() - 1;
        int r = matrix[0].size() - 1;
        int row = 0;
        int i = matrix.size() / 2;
        while (i < matrix.size() && i >= 0 && left <= right) {
            if (target >= matrix[i][l] && target <= matrix[i][r]) {
                row = i;
                break;
            } else if (target > matrix[i][l] && target > matrix[i][r]) {
                left = i + 1;
                i = (right + left) / 2;
            } else {
                right = i - 1;
                i = (right + left) / 2;
            }
        }
        l = 0;
        r = matrix[row].size() - 1;
        int mid = l + (r - l) / 2;
        while (l <= r) {
            if (matrix[row][mid] == target) {
                return true;
            } else if (matrix[row][mid] > target) {
                r = mid - 1;
                mid = l + (r - l) / 2;
            } else {
                l = mid + 1;
                mid = l + (r - l) / 2;
            }
        }

        return false;
    }
};