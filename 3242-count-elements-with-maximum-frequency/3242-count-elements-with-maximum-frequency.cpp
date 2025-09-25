class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n = nums.size();
        for(int i =0; i<n; i++){
            freq[nums[i]]++;
        }
        int maxi=0;
        for(auto it = freq.begin(); it!=freq.end(); it++){
            if(it->second>=maxi){
                maxi=max(maxi,it->second);
            }
        }
        int c=0;
        for(auto it=freq.begin(); it!=freq.end(); it++){
            if(it->second==maxi){
                c+=maxi;
            }
        }
        return c;
    }
};