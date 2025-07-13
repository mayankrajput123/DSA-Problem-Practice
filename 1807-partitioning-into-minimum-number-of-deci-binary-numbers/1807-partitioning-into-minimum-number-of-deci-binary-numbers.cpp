class Solution {
public:
    int minPartitions(string n) {
        vector<int> arr;
        for(int i =0; i<n.size(); i++){
            int intdig = n[i]-'0';
            arr.push_back(intdig);
        }
        return *max_element(arr.begin(),arr.end());
    }
};