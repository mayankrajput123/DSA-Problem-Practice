class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int,int> freq;
        int l=0;
        int maxfreq=0;
        for(int r=0; r<n; r++){
            freq[fruits[r]]++;
            while(freq.size()>2){
                freq[fruits[l]]--;
                if(freq[fruits[l]]==0){
                    freq.erase(fruits[l]);
                }
                l++;
            }
            maxfreq=max(maxfreq,r-l+1);
        }
        return maxfreq;
    }
};