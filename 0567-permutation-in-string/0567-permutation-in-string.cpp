class Solution {
public:
    bool equal(int count1[],int count2[]){
        for(int i =0; i<26; i++){
            if(count1[i]!=count2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i =0; i<s1.size(); i++){
            char c1 = s1[i];
            count1[c1-'a']++;
        }
        int i=0;
        int count2[26]={0};
        while(i<s2.size() && i<s1.size()){
            char c2 = s2[i];
            count2[c2-'a']++;
            i++;
        }
        if(equal(count1,count2)){
            return true;
        }
        int window = s1.size();
        while(i<s2.size()){
            int newchar = s2[i];
            count2[newchar-'a']++;
            int oldchar = s2[i-window];
            count2[oldchar-'a']--;
            if(equal(count1,count2)){
                return true;
            }
            i++;
        }
        return false;


    }
};