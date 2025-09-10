class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n = words.size();
        string str="";
        for(int i =0; i<n; i++){
            str+=words[i][0];
        }
        return s==str;
    }
};