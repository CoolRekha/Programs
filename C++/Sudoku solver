class Solution {
public:
    bool help(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        //board[i][j]=c;
                        if(help2(board,i,j,c)){
                            board[i][j]=c;
                        if(help(board))return true;
                         else board[i][j]='.';
                                               }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool help2(vector<vector<char>>& board,int r,int co,char c){
        for(int k=0;k<9;k++){
            if(board[k][co]==c)return false;
            if(board[r][k]==c)return false;
            if(board[3*(r/3)+k/3][3*(co/3)+k%3]==c)return false;
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        help(board);
    }
};
