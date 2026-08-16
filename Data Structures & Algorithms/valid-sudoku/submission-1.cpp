class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<char> row;
            unordered_set<char> col;
            unordered_set<char> box;
            for(int j=0;j<9;j++){
                if(board[i][j] != '.' && row.find(board[i][j]) != row.end()) return false;
                if(board[j][i] != '.' && col.find(board[j][i]) != col.end()) return false;
                int r = 3*(i/3) + (j/3);
                int c = 3*(i%3) + (j%3);
                if(board[r][c] != '.' && box.find(board[r][c]) != box.end()) return false;
                row.insert(board[i][j]);
                col.insert(board[j][i]);
                box.insert(board[r][c]);
            }
            
        }
        return true;
    }
};
