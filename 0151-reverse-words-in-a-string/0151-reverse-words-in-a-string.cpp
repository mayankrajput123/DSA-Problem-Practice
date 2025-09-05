class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string>str;
        string word;
        for(int i =0; i<n; i++){
            if(s[i]!=' '){
                word+=s[i];
            }else if(!word.empty()){
                str.push_back(word);
                word.clear();
            }
        }
        if(!word.empty()){
            str.push_back(word);
        }
        string ans;
        for(int i=str.size()-1; i>=0; i--){
            ans+=str[i];
            if(i!=0){
                ans+=' ';
            }
        }
        return ans;
    }
};