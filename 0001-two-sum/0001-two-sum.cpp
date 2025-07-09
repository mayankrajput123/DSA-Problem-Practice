class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
                    
        //             return {i,j};
        //         }

        //     }
        // }
        // return {};
        
        //using map
        unordered_map<int,int> arr;
        int n = nums.size();
        for(int i =0; i<n; i++){
            int diff = target-nums[i];
            if(arr.find(diff)!=arr.end()){
                return {arr[diff],i};
            }
            arr[nums[i]]=i;
        }
        return {};


    }
};