class Solution {
public:
    string stringHash(string s, int k) {
        string result="";
        int n = s.size();
        for(int i =0; i<n; i+=k){
            int sum=0;
            for(int j=i; j<i+k && j<n; j++){
                int value = s[j]-'a';
                sum+=value;
            }
            int value = sum%26;
            char c = 'a'+value;
            result+=c;

        }
        return result;
    }
};