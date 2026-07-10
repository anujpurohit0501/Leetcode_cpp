class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> col(9, vector<bool>(9, false));
        vector<vector<bool>> row(9, vector<bool>(9, false));
        vector<vector<bool>> box(9, vector<bool>(9, false));
        for(int i=0;i<board[0].size();i++){
            for(int j=0;j<board.size();j++){
                if(board[i][j]=='.')continue;
                int num=board[i][j]-'1';
                int h=(i/3)*3+(j/3);
                if(col[j][num]==true||row[i][num]==true||box[h][num]==true)return false;
                col[j][num]=true;
                row[i][num]=true;
                box[h][num]=true;
            }
        }return true;
    }
};