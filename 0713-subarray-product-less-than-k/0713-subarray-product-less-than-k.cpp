class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int c=0;
        int l=0;
        long long prod=1;
        if(k<=1){
            return 0;
        }
        for(long long r =0; r<n; r++){
            prod*=nums[r];
            while(prod>=k){
                prod = prod/nums[l];
                l++;
            }
            c+= r-l+1;
        }
        return c;
    }
};