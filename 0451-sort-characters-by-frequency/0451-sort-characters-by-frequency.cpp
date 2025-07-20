class Solution {
public:
    static bool cmp(const pair<char,int> &a,const pair<char,int> &b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int> arr;
        for(int i =0; i<n; i++){
            arr[s[i]]++;
        }
        vector<pair<char,int>> chars(arr.begin(),arr.end());
        sort(chars.begin(),chars.end(),cmp);
        string ans = "";
        for(int i =0; i<chars.size(); i++){
            pair<char,int>p = chars[i];
            for(int j =0; j<p.second; j++){
                ans+=p.first;
            }
        }
        return ans;
    }
};