class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        vector<char>arr;
        int i =0;
        while(i<n){
            char ch = chars[i];
            int c=0;
            while(i<n && chars[i]==ch){
                c++;
                i++;
            }
            arr.push_back(ch);
            if(c>1){
                string s = to_string(c);
                for(int i =0; i<s.size(); i++){
                    arr.push_back(s[i]);
                }
            }

        }
        chars = arr;
        return chars.size();
    }
};