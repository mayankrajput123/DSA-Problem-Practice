class Solution {
public:
    int partitionString(string s) {
        int n = s.size();
        set<char> arr;
        int c=1;
        for(int i =0; i<n; i++){
            if(arr.find(s[i])!=arr.end()){
                arr.clear();
                c++;
            }
            arr.insert(s[i]);
        }
        return c;
    }
};