class Solution {
public:
    string ispalin(string s,int i, int j){
        while(i>=0 && j<s.size() && s[i]==s[j]){
            i--;
            j++;
        }
        return s.substr(i+1,j-i-1);
    }
    string longestPalindrome(string s) {
        int n = s.size();
        string str = "";
        for(int i =0; i<n; i++){
            //odd ke liye
            string s1 = ispalin(s,i,i);
            if(s1.size()>str.size()){
                str = s1;
            }
            //even ke liye
            string s2 = ispalin(s,i,i+1);
            if(s2.size()>str.size()){
                str=s2;
            }

        }
        return str;
    }
};