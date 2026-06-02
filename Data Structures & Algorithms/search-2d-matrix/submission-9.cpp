class Solution {
public:

bool searchInRows(vector<vector<int>>& matrix,int midrow,int target) {
    int m=matrix[0].size();
    int start=0,end=m-1;
    while(start<=end) {
        int mid=start+(end-start)/2;
        if(matrix[midrow][mid]==target) {
            return true;
        }else if(matrix[midrow][mid]<target) {
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return false;
}


    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        //search in rows:)
        int st=0,end=n-1;
        while(st<=end) {
            int midrow=st+(end-st)/2;
            if(matrix[midrow][0]<=target && matrix[midrow][m-1]>=target) {
                return searchInRows(matrix,midrow,target);
            }else if(matrix[midrow][m-1]<target) {
               
                st=midrow+1;
            }else{
                 end=midrow-1;
            }
        }
        return false;
    }
};
