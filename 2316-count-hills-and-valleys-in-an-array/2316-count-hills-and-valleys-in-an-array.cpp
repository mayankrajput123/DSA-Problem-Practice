class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int c=0;
        int j=0;
        for(int i =1; i<n-1; i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            if((nums[i]>nums[j] && nums[i]>nums[i+1]) || (nums[i]<nums[j] && nums[i]<nums[i+1])){
                c++;
            }
            j=i;
        }
        return c;
    }
};