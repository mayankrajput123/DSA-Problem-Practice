class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> arr={{}};
        int n = nums.size();
        for(int i =0; i<n; i++){
            int m = arr.size();
            for(int j =0; j<m; j++){
                vector<int> subset= arr[j];
                subset.push_back(nums[i]);
                arr.push_back(subset);
            }
        }
        return arr;

    }
};