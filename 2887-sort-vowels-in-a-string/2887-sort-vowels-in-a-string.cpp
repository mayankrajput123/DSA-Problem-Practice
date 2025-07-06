class Solution {
public:
    bool isvowel(char c){
        if(c == 'a') return true;
        if(c == 'e') return true;
        if(c == 'i') return true;
        if(c == 'o') return true;
        if(c == 'u') return true;
        if(c == 'A') return true;
        if(c == 'E') return true;
        if(c == 'I') return true;
        if(c == 'O') return true;
        if(c == 'U') return true;
        return false;
    }
    string sortVowels(string s) {
        vector<char> arr;
        for(int i=0; i<s.size(); i++){
            if(isvowel(s[i])){
                arr.push_back(s[i]);
            }
        }
        sort(arr.begin(),arr.end());
        int vow = 0;
        for(int i =0; i<s.size(); i++){
            if(isvowel(s[i])){
                s[i] = arr[vow];
                vow++;
            }
        }
        return s;
    }
};