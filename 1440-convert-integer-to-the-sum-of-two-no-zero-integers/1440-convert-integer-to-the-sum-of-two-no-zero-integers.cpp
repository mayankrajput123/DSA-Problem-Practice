class Solution {
public:
    bool iszero(int num){
        while(num>0){
            if(num%10==0){
                return true;
            }
            num/=10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>arr;
        for(int i =1; i<n; i++){
            int a=i;
            int b=n-i;
            if(!iszero(a) && !iszero(b)){
                arr.push_back(a);
                arr.push_back(b);
                break;
            }
        }
        return arr;
    }
};