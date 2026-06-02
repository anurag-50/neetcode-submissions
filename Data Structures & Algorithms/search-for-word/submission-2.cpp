class Solution {
public:

bool df(vector<vector<char>>& board,string &word,int indx,int row,int column) {
    if(indx==word.size()) {
        return true;
    }
    if(row<0 || row>=board.size() || column<0 || column>=board[0].size() || board[row][column]!=word[indx]) {
        return false;
    }
    char temp=board[row][column];
    board[row][column]='#';
    bool vis=df(board,word,indx+1,row+1,column) ||
                df(board,word,indx+1,row-1,column) ||
                df(board,word,indx+1,row,column+1) ||
                df(board,word,indx+1,row,column-1);
    board[row][column]=temp;
    return vis;
}


    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size();
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(df(board,word,0,i,j))
                return true;
            }
        }
        return false;
    }
};
