class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        int c= 1;
        ans+= s[0];
        for(int i =1; i<s.size(); i++){
            if(s[i] == s[i-1]){
                c++;
            }else{
                c=1;
            }
            if(c<=2){
                ans+=s[i];
            }
        }
        return ans;
    }
};