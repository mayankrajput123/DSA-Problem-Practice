class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        int c=0;
        int currwater=capacity;
        for(int i =0; i<n; i++){
            if(currwater<plants[i]){
                c+=(i*2);
                currwater=capacity;
            }
            currwater-=plants[i];
            c+=1;
        }
        return c;
    }
};