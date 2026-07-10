class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> col(9, vector<int>(9, 0));
        vector<vector<int>> row(9, vector<int>(9, 0));
        vector<vector<int>> box(9, vector<int>(9, 0));
        for(int i=0;i<board[0].size();i++){
            for(int j=0;j<board.size();j++){
                if(board[i][j]=='.')continue;
                int num=board[i][j]-'1';
                int h=(i/3)*3+(j/3);
                if(col[j][num]==1||row[i][num]==1||box[h][num]==1)return false;
                col[j][num]=1;
                row[i][num]=1;
                box[h][num]=1;
            }
        }return true;
    }
};