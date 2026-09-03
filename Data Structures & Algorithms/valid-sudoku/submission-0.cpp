class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (auto& row : board) {
            unordered_map<char, int> rows;
            for (auto& y : row) {
                if (y == '.')
                    continue;
                rows[y]++;
                if (rows[y] > 1)
                    return false;
            }
        }
        int cols = board[0].size();
        for (int col = 0; col < cols; col++) {
            unordered_map<char, int> columns;
            for (int row = 0; row < board.size(); row++) {
                if (board[row][col] == '.')
                    continue;
                columns[board[row][col]]++;
                if (columns[board[row][col]] > 1)
                    return false;
            }
        }
        vector<unordered_map<char, int>> boxes(9);
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.')
                    continue;
                int boxIndex = (row / 3) * 3 + (col / 3);
                boxes[boxIndex][board[row][col]]++;
                if (boxes[boxIndex][board[row][col]] > 1)
                    return false;
            }
        }

        return true;
    }
};
