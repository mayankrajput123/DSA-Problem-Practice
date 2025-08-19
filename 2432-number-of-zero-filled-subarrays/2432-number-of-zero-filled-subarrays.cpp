class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n = nums.size();
        int c=0;
        long total=0;
        for(int i =0; i<n; i++){
            if(nums[i] == 0){
                c++;
                total+=c;
            }else{
                c=0;
            }
        }
        return total;
    }
};