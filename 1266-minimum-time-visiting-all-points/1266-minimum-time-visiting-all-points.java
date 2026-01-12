class Solution {
    public int minTimeToVisitAllPoints(int[][] points) {
        int totaltime=0;
        for(int i =0; i<points.length-1; i++){
            int[] first= points[i];
            int[] second=points[i+1];
            int a=Math.abs(first[0]-second[0]);
            int b=Math.abs(first[1]-second[1]);
            totaltime+=Math.max(a,b);
        }
        return totaltime;
    }
}