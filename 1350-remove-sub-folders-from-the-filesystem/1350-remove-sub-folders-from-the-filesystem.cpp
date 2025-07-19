class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        int n = folder.size();
        vector<string> arr;
        sort(folder.begin(),folder.end());
        for(int i =0; i<n; i++){
            if(arr.empty()|| folder[i].find(arr.back()+"/") !=0){
                arr.push_back(folder[i]);
            }
        }
        return arr;
    
    }
};