class Solution {
public:
    bool isnice(vector<int>& arr){
        int size=arr.size();
        for(int i =0; i<size; i++){
            for(int j = i+1; j<size; j++){
                if((arr[i]&arr[j])!=0){
                    return false;
                }
            }
        }
        return true;
    }
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxlen=0;
        for(int i =0; i<n; i++){
            vector<int> sub;
            for(int j =i; j<n; j++){
                sub.push_back(nums[j]);
                if(isnice(sub)){
                    if(sub.size()>maxlen){
                        maxlen=sub.size();
                    }
                }else{
                    break;
                }
            }
        }
        return maxlen;
    }
};