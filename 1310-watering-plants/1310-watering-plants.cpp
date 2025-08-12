class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        int c=0;
        int cw=capacity;
        for(int i =0; i<n; i++){
            if(cw<plants[i]){
                c+=(i*2);
                cw=capacity;
            }
            cw-=plants[i];
            c+=1;
        }
        return c;
    }
};