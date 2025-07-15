class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        if(n<3){
            return false;
        }
        bool vowel = false;
        bool conso = false;
        for(int i =0; i<n; i++){
            char ch = word[i];
            bool digit = false;
            if(ch>='0'  && ch<='9'){
                digit = true;
            }
            bool alpha = false;
            if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
                alpha = true;
            }
            if(!alpha && !digit){
                return false;
            }
            if(alpha){
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch=='o' || ch=='u' || 
                   ch == 'A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                    vowel = true;
                }else{
                    conso = true;
                }
            }
        }
        if(vowel && conso){
            return true;
        }else{
            return false;
        }
        return true;
    }
};