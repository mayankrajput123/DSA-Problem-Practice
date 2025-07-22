class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        set<int> arr;
        int sum =0;
        int i=0;
        int j=0;
        while(j<n){
            if(arr.find(nums[j]) == arr.end()){
                arr.insert(nums[j]);
                sum+=nums[j];
                maxi = max(maxi,sum);
                j++;
            }else{
                arr.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
        }
        return maxi;
    }
};