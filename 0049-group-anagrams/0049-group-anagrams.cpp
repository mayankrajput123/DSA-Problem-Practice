class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> arr;
        unordered_map<string,vector<string>> freq;
        for(int i =0 ; i<strs.size(); i++){
            string key = strs[i];
            sort(key.begin(),key.end());
            freq[key].push_back(strs[i]);
        }
        for(unordered_map<string,vector<string>>:: iterator it = freq.begin(); it!=freq.end(); it++ ){
            arr.push_back(it->second);
        }
        return arr;


    }
};