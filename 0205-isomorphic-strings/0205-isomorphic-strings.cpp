class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> occ1;
        unordered_map<char,int> occ2;
        for(int i =0; i<s.size(); i++){
            if(occ1[s[i]]!=occ2[t[i]]){
                return false;
            }
            occ1[s[i]]=i+1;
            occ2[t[i]]=i+1;
        }
        return true;
    }
};