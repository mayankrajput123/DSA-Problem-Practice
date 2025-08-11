class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>arr;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]==x){
                arr.push_back(i);
            }
        }
        vector<int>ans;
        for(int i =0; i<queries.size(); i++){
            if(queries[i]<=arr.size()){
                ans.push_back(arr[queries[i]-1]);
            }else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};