class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> arr(26,false);
        for(int i =0; i<brokenLetters.size(); i++){
            arr[brokenLetters[i]-'a'] = true;
        }
        int c=0;
        bool type=true;
        for(int i =0; i<=text.size(); i++){
            if(i==text.size() || text[i]==' '){
                if(type){
                    c++;
                }
                type=true;
            }else{
                if(arr[text[i]-'a']){
                    type=false;
                }
            }
        }
        return c;
    }
};