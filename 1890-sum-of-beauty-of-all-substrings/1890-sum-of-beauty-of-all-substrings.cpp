class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int total=0;
        for(int i =0; i<n; i++){
            unordered_map<char,int> arr;
            for(int j =i; j<n; j++){
                arr[s[j]]++;
                int maxi=0;
                int mini=n+1;
                for(unordered_map<char,int>::iterator it=arr.begin(); it!=arr.end(); it++){
                    int c= it->second;
                    maxi=max(maxi,c);
                    mini=min(mini,c);
                }
                int curtotal=maxi-mini;
                total+=curtotal;
            }
        }
        return total;
    }
};