class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        string arr(n,'0');
        for(int i =0; i<n; i++){
            if(nums[i][i] == '0'){
                arr[i] = '1';
            }else{
                arr[i] = '0';
            }
        }
        return arr;
    }
};