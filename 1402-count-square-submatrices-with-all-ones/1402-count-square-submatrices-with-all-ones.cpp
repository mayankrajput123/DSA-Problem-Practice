class Solution {
public:
    bool isone(vector<vector<int>>& matrix, int r,int c, int s){
        for(int i=r; i<r+s; i++){
            for(int j =c; j<c+s; j++){
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
                    }
                }
            }
        }
        return c;
    }
};