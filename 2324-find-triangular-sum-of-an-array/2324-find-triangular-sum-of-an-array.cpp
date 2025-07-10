class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        while(n!=0){
            if(n==1){
                return nums[0];
            }
            vector<int> arr;
            for(int i =0; i<n-1; i++){
                arr.push_back((nums[i]+nums[i+1])%10);
            }
            nums = arr;
            n =n-1;
        }
        return nums[0];
    }
};