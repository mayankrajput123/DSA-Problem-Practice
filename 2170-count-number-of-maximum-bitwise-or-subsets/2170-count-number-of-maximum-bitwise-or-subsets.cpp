class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int maxor = 0;
        int c=0;
        for(int i=1; i<(1<<n); i++){
            int curror = 0;
            for(int j =0; j<n; j++){
                if(i &(1<<j)){
                    curror = curror | nums[j];
                }
            }
            if(curror>maxor){
                maxor = curror;
                c=1;
            }else if(curror == maxor){
                c++;
            }
        }
        return c;
    }
};