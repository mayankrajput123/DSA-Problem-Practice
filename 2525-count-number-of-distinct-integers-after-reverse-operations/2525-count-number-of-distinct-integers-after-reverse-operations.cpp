class Solution {
public:
    int rev(int num){
        int ans =0;
        while(num>0){
            int digit = num%10;
            ans = ans*10+digit;
            num/=10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> arr;
        int n = nums.size();
        for(int i =0; i<n; i++){
            arr.insert(nums[i]);
            arr.insert(rev(nums[i]));
        }
        return arr.size();
    }
};