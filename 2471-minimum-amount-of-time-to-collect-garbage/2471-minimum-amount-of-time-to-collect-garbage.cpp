class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();
        int m =0;
        int p=0;
        int g=0;
        int lm=0;
        int lg=0;
        int lp=0;
        for(int i =0; i<n; i++){
            for(int j=0; j<garbage[i].size(); j++){
                if(garbage[i][j] == 'M'){
                    m++;
                    lm=i;
                }else if(garbage[i][j] == 'G'){
                    g++;
                    lg=i;
                }else if(garbage[i][j] == 'P'){
                    p++;
                    lp=i;
                }
            }
        }
        int time =m+p+g;
        for(int i=0; i<lm; i++){
            time+=travel[i];
        }
        for(int i =0; i<lg; i++){
            time+=travel[i];
        }
        for(int i =0; i<lp; i++){
            time+=travel[i];
        }
        return time;
    }
};