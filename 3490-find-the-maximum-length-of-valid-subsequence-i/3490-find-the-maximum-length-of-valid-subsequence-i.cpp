class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n = nums.size();
        int even =0;
        int odd = 0;
        int alteven =0;
        int altodd=0;
        for(int i =0; i<n; i++){
            if(nums[i]%2==0){
                even++;
            }
        }
        for(int i =0; i<n; i++){
            if(nums[i]%2!=0){
                odd++;
            }
        }
        int alt1 = 0;
        for(int i =0; i<n; i++){
            if(nums[i]%2 == alt1){
                alteven++;
                alt1= 1-alt1;
            }
        }
        int alt2=1;
        for(int i =0; i<n; i++){
            if(nums[i]%2 == alt2){
                altodd++;
                alt2 = 1-alt2;
            }
        }
        int maxi = even;
        if(odd>maxi){
            maxi=odd;
        }
        if(alteven>maxi){
            maxi=alteven;
        }
        if(altodd>maxi){
            maxi = altodd;
        }
        return maxi;
    }
};