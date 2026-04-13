class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            map<int, int> mp;
            for (int j = 0; j < 9; j++) {
                mp[board[i][j]]++;
                if(board[i][j] != '.' && mp[board[i][j]] > 1) {
                    return false;
                }
            }
        }
        for (int i = 0; i < 9; i++) {
            map<int, int> mp;
            for (int j = 0; j < 9; j++) {
                mp[board[j][i]]++;
                if(board[j][i] != '.' && mp[board[j][i]] > 1) {
                    return false;
                }
            }
        }
        for (int i = 0; i <= 6; i += 3) {
            for (int j = 0; j <= 6; j += 3) {
                map<int, int> mp;
                for (int k = i; k < i+3; k++) {
                    for (int l = j; l < j+3; l++) {
                        mp[board[k][l]]++;
                        if(board[k][l] != '.' && mp[board[k][l]] > 1) {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
