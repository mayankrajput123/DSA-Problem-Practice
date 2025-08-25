class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>>arrd(m+n-1);
        for(int i =0; i<m; i++){
            for(int j =0; j<n; j++){
                arrd[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>ans;
        for(int i=0; i<arrd.size(); i++){
            if(i%2==0){
                reverse(arrd[i].begin(),arrd[i].end());
            }
            for(int j=0; j<arrd[i].size(); j++){
                ans.push_back(arrd[i][j]);
            }
        }
        return ans;
    }
};