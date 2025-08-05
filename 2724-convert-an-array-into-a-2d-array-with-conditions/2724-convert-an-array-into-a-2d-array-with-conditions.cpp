class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> arr;
        int n = nums.size();
        for(int i =0; i<n; i++){
            int place=0;
            for(int j =0; j<arr.size(); j++){
                bool found = false;
                for(int k =0; k<arr[j].size(); k++){
                    if(arr[j][k]==nums[i]){
                        found=true;
                        break;
                    }
                }
                if(!found){
                    arr[j].push_back(nums[i]);
                    place=1;
                    break;
                }
            }
            if(!place){
                vector<int>a;
                a.push_back(nums[i]);
                arr.push_back(a);
            }
        }
        return arr;
    }
};