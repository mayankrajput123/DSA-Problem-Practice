class Solution {
public:
    string customSortString(string order, string s) {
        string str="";
        for(int i =0; i<order.size(); i++){
            for(int j =0; j<s.size(); j++){
                if(order[i] == s[j]){
                    str.push_back(order[i]);
                }
            }
        }
        string s1="";
        for(int i =0; i<s.size(); i++){
            if(order.find(s[i]) == string::npos){
                str.push_back(s[i]);
            }
            
        }
        sort(s1.begin(),s1.end());
        str+=s1;
        return str;
    }
};