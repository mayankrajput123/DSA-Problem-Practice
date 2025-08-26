class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n=dimensions.size();
        int maxd=0;
        int maxa=0;
        for(int i =0; i<n; i++){
            int l=dimensions[i][0];
            int w=dimensions[i][1];
            int diagonalsqrt = l*l+w*w;
            int area = l*w;
            if(diagonalsqrt>maxd){
                maxd=diagonalsqrt;
                maxa=area;
            }else if(diagonalsqrt==maxd){
                if(area>maxa){
                    maxa=area;
                }
            }
        }
        return maxa;
    }
};