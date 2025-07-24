class Solution {
public:
    int romanToInt(string s) {
        vector<int> value = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> symbol = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int num=0;
        int i =0;
        while(!s.empty() && i<symbol.size()){
            if(s.find(symbol[i])==0){
                num= num+value[i];
                s.erase(0,symbol[i].size());
            }else{
                i++;
            }
            
        }
        
        return num;
    }
};