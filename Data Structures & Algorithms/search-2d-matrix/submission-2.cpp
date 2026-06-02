class Solution {
public:
//ESARCH IN COLUMNS :)

bool searchincolumn(vector<vector<int>>& matrix, int target,int midrow) {
int st=0,end=matrix[0].size()-1;
while(st<=end) {
    int mid=st+(end-st)/2;
    if(target==matrix[midrow][mid]) {
        return true;
    }else if(target>matrix[midrow][mid]) {
        st=mid+1;
    }else{
        end=mid-1;
    }
}
return false;
}
    
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int st=0,end=n-1;
        //BINERY SEARCH ON ROWS


        while(st<=end) {
            int midrow=st+(end-st)/2;
            if(target>=matrix[midrow][0] && target<=matrix[midrow][m-1]) {
                return searchincolumn(matrix,target,midrow);
            }else if(target>matrix[midrow][m-1]) {
                st=midrow+1;
            }else{
                end=midrow-1;
            }
        }
        return false;
    }
};
