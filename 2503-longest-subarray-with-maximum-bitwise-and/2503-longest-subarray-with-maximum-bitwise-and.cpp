class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxelem = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i]>maxelem){
                maxelem=nums[i];
            }
        }
        int cur=0;
        int maxi=0;
        for(int i=0; i<n; i++){
            if(nums[i] == maxelem){
                cur++;
                if(cur>maxi){
                    maxi=cur;
                }
            }else{
                cur=0;
            }
        }
        return maxi;
    }
};