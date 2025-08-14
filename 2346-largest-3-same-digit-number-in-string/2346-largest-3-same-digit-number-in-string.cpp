class Solution {
public:
    string largestGoodInteger(string num) {
        int n= num.size();
        string s1="";
        for(int i =1; i<n-1; i++){
            string s="";
            if(num[i]==num[i-1] && num[i]==num[i+1]){
                s+=num[i-1];
                s+=num[i];
                s+=num[i+1];
            }
            s1=max(s,s1);
        }
        return s1;
    }
};