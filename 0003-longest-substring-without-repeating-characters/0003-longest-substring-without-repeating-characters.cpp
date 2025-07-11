class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        set<string> arr;
        for(int i =0; i<n; i++){
            set<char> ch;
            string str = "";
            for(int j =i; j<n; j++){
                if(ch.find(s[j]) != ch.end()){
                    break;
                }
                ch.insert(s[j]);
                str+=s[j];
                arr.insert(str);
            }
        }
        string max = "";
        for(set<string>::iterator it = arr.begin(); it!= arr.end(); it++){
            if(it->size()>max.size()){
                max = *it;
            }
        }
        return max.size();
        
    }
};