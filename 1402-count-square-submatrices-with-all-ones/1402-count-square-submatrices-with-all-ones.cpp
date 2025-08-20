class Solution {
public:
    bool isone(vector<vector<int>>& matrix, int row,int col, int size){
        for(int i=row; i<row+size; i++){
            for(int j =col; j<col+size; j++){
                if(matrix[i][j]==0){
                    return false;
                }
            }
        }
        return true;
    }
    int countSquares(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m = matrix[0].size();
        int c=0;
        for(int i =0; i<n; i++){
            for(int j=0; j<m; j++){
                for(int s=1; i+s<=n && j+s<=m; s++){
                    if(isone(matrix,i,j,s)){
                        c++;
                    }else{
                        break;
                    }
                }
            }
        }
        return c;
    }
};