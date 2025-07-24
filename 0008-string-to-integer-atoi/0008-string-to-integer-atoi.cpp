class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i =0;
        while(i<n && s[i] == ' '){
            i++;
        }
        int sign = 1;
        if(s[i] == '-'){
            sign=-1;
            i++;
        }else if(s[i] == '+'){
            sign = 1;
            i++;
        }
        int nums = 0;
        while(i<n && s[i]>='0' && s[i]<='9'){
            if(nums>INT_MAX/10 || (nums == INT_MAX/10 && s[i]>'7')){
                if(sign == -1){
                    return INT_MIN;
                }
                if(sign == 1){
                    return INT_MAX;
                }
            }
            nums = nums*10+(s[i]-'0');
            i++;
        }
        return sign*nums;
    }
};