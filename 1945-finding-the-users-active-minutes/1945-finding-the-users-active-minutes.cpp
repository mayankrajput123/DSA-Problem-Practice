class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,unordered_set<int>> arr;
        for(int i =0; i<logs.size(); i++){
            int id = logs[i][0];
            int minute = logs[i][1];
            arr[id].insert(minute);
        }
        vector<int> ans(k,0);
        for(unordered_map<int,unordered_set<int>>::iterator it = arr.begin(); it!= arr.end(); it++){
            int uam = it->second.size();
            if(uam<=k){
                ans[uam-1]++;
            }
        }
        return ans;
    }
};