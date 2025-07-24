class Solution {
public:
    bool ispresent(string haystack,string needle){
        for(int i=0; i<needle.size(); i++){
            if(haystack[i]!=needle[i]){
                return false;
            }
        }
        return true;
    }
    int strStr(string haystack, string needle) {
        for(int i =0; i<haystack.size(); i++){
            string sub = haystack.substr(i,needle.size());
            if(ispresent(sub,needle)){
                return i;
            }
        }
        return -1;
    }
};