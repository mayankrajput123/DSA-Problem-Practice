class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i =0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        int max = 0;
        for(unordered_map<int,int>::iterator it = freq.begin(); it!=freq.end(); it++){
            int key = it->first;
            int value = it->second;
            if(freq.find(key+1)!= freq.end()){
                int total = value+freq[key+1];
                if(total>max){
                    max=total;
                }
            }
        }
        return max;

    }
};