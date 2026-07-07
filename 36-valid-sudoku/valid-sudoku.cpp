class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string, int> mp;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                string row = "R" + to_string(i) + board[i][j];
                string col = "C" + to_string(j) + board[i][j];
                string box = "B" + to_string(i / 3) + to_string(j / 3) + board[i][j];

                mp[row]++;
                mp[col]++;
                mp[box]++;

                if (mp[row] > 1 || mp[col] > 1 || mp[box] > 1) return false; // count
            }
        }
        return true;
    }
};