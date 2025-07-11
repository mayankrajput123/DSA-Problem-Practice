class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> freqt;
        unordered_map<char,int> freqs;
        for(int i =0; i<(int)t.size(); i++){
            freqt[t[i]]++;
        }
        for(int i=0; i<(int)s.size(); i++){
            freqs[s[i]]++;
        }
        int ans=0;
        for(unordered_map<char,int>::iterator it = freqt.begin(); it!= freqt.end(); it++){
            int ch = it->first;
            int countt = it->second;
            int counts = 0;
            if(freqs.find(ch)!=freqs.end()){
                counts= freqs[ch];
            }
            if(countt>counts){
                ans += (countt-counts);
            }
        }
        return ans;
    }
};