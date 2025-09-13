class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'){
            return true;
        }
        return false;
    }
    int maxFreqSum(string s) {
        int n = s.size();
        unordered_map<char,int> freq;
        for(int i =0; i<n; i++){
            freq[s[i]]++;
        }
        int vow=0;
        int con=0;
        for(auto it : freq){
            if(isvowel(it.first)){
                vow=max(vow,it.second);
            }else{
                con = max(con,it.second);
            }
        }
        return vow+con;
    }
};