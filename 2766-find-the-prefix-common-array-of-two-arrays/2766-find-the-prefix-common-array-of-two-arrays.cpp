class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> arr;
        int c;
        for(int i =0; i<A.size(); i++){
            c=0;
            for(int j = 0; j<=i; j++){
                for(int k = 0; k<=i; k++){
                    if(A[j]== B[k]){
                        c++;
                        break;
                    }
                }
            }
            arr.push_back(c);
        }
        return arr;
    }
};