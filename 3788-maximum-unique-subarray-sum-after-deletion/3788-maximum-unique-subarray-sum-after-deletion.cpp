class Solution {
public:
    int maxSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans = nums[n-1];
        for(int i =n-2; i>=0; i--){
            if(nums[i]<=0){
                break;
            }
            if(nums[i]!=nums[i+1]){
                ans+=nums[i];
            }
        }
        return ans;
    }
};
