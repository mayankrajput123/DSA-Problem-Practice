class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int total=0;
        int prevc=0;
        for(int i =0; i<n; i++){
            int c=0;
            for(int j=0; j<bank[i].size(); j++){
                if(bank[i][j] == '1'){
                    c++;
                }
            }
            if(c>0){
                total+=prevc*c;
                prevc = c;
            }
        }
        return total;
    }
};