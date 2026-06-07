class Solution {
public:

    bool searchInCols(vector<vector<int>>& matrix,int midRow, int target) {
        int m=matrix[0].size();
        int start=0,end=m-1;
        while(start<=end) {
            int mid=start+(end-start)/2;
            if(matrix[midRow][mid]==target) {
                return true;
            }else if(matrix[midRow][mid]<target) {
                start++;
            }else{
                end--;
            }
        }
        return false;
    }



    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int start=0,end=n;
        while(start<end) {
            int midRow=start+(end-start)/2;
            if(matrix[midRow][0]<=target && matrix[midRow][m-1]>=target) {
                return searchInCols(matrix,midRow,target);
            }else if(matrix[midRow][m-1]<target){
                start++;
            }else{
                end--;
            }
        }
        return false;
    }
};
