class Solution {
public:
    string processStr(string s) {
        string str="";
        int n = s.size();
        for(int i=0; i<n; i++){
            char c = s[i];
            if(c>='a' && c<='z'){
                str.push_back(c);
            }else if(c == '*'){
                if(!str.empty())
                    str.pop_back();
            }else if(c == '#'){
                str+=str;
            }else if(c=='%'){
                reverse(str.begin(),str.end());
            }
        }
        return str;
    }
};