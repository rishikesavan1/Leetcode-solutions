class Solution {
public:
    bool isgood(vector<vector<char>> board, int r, int c,int val){
        for(int i =0 ; i < 9;i++){
            if(i != c && board[r][i] == val){
                return false;
            }
        }
        for(int i =0 ; i < 9;i++){
            if(i != r && board[i][c] == val){
                return false;
            }
        }
        int subgridrow = (r/3)*3;
        int subgridcol = (c/3)*3;
        for(int i = subgridrow ; i < subgridrow + 3 ; i++){
            for(int j = subgridcol ; j < subgridcol + 3 ; j++){
                if((i != r || j != c) && board[i][j] == val){
                    return false;
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9;i++){
            for(int j = 0; j < 9;j++){
                if(board[i][j] != '.'){
                    if(!isgood(board,i,j,board[i][j])){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};