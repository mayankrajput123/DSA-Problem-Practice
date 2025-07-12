class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int s=0;
        int l=0;
        int minlen = INT_MAX;
        for(int r =0; r<n; r++){
            s+=nums[r];
            while(s>=target){
                int sublen=r-l+1;
                if(sublen<minlen){
                    minlen  = sublen;
                }
                s-=nums[l];
                l++;
            }
        }
        if(minlen == INT_MAX){
            return 0;
        }
        return minlen;
    }
};