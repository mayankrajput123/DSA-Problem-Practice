class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>arr;
        if(n%2!=0){
            arr.push_back(0);
        }
        for(int i =1; arr.size()<n; i++){
            arr.push_back(i);
            arr.push_back(-i);
        }
        return arr;
    }
};