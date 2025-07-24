class Solution {
public:
    bool isvowel(char c){
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u' && c!='A' && c!='E' && c!='I' && c!='O' && c!='U'){
            return false;
        }else{
            return true;
        }
    }
    string reverseVowels(string s) {
        int n = s.size();
        int i =0;
        int j = n-1;
        while(i<j){
            if(!isvowel(s[i])){
                i++;
            }else if(!isvowel(s[j])){
                j--;
            }else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};