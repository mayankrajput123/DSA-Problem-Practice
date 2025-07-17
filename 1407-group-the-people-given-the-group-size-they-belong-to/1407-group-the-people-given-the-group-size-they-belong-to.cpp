class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n =groupSizes.size();
        vector<vector<int>> arr(n+1);
        vector<vector<int>> ans;
        for(int i =0; i<n; i++){
            int size = groupSizes[i];
            arr[size].push_back(i);
            if(arr[size].size() == size){
                ans.push_back(arr[size]);
                arr[size].clear();
            }
        }
        return ans;
    }
};