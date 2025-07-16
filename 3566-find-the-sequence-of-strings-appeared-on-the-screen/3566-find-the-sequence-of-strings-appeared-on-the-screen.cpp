class Solution {
public:
    vector<string> stringSequence(string target) {
        int n = target.size();
        vector<string> str;
        string s="";
        for(int i =0; i<n; i++){
            s.push_back('a');
            str.push_back(s);
            while(s.back()!=target[i]){
                if(s.back() == 'z'){
                    s.back() = 'a';
                }else{
                    s.back()++;
                }
                str.push_back(s);
            }
        }
        return str;
    }
};