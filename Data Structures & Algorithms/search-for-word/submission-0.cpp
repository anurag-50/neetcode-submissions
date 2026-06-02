class Solution {
public:
bool df(vector<vector<char>>& board, string word,int i,int j,int indx) {
    if(indx==word.size()) {
        return true;
    }
    if(i<0 || i>=board.size()|| j<0 ||j>=board[0].size() || board[i][j]!=word[indx]) {
        return false;
    }
    char temp=board[i][j];
    board[i][j]='#';
    bool vis=df(board,word,i+1,j,indx+1) ||
            df(board,word,i-1,j,indx+1) ||
            df(board,word,i,j+1,indx+1) ||
            df(board,word,i,j-1,indx+1);
     board[i][j]=temp;
     return vis;       
}
    bool exist(vector<vector<char>>& board, string word) {
        int row=board.size(),col=board[0].size();
        for(int i=0;i<board.size();i++) {
            for(int j=0;j<board[0].size();j++) {
                if(df(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};
