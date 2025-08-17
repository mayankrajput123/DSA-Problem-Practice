class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int space=0;
        for(int i=0; i<s.size(); i++){
            if(space<spaces.size()  && i==spaces[space]){
                ans+=' ';
                space++;
            }
            ans+=s[i];
        }
        return ans;
    }
};