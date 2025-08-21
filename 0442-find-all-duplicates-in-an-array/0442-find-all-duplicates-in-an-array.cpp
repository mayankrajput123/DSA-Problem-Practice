class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> freq;
        vector<int>ans;
        for(int i =0; i<n; i++){
            freq[nums[i]]++;
        }
        unordered_map<int,int>::iterator it;
        for(it=freq.begin(); it!=freq.end(); it++){
            if(it->second>1){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};