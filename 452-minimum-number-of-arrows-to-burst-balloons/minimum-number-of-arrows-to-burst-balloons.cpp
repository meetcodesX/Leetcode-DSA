class Solution {
public:
    static bool compare(vector<int>& a,vector<int>& b){
        return a[1] < b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),compare);
        int arrows = 1;
        long long arrowPos = points[0][1];

        for(int i=0;i<points.size();i++){
            if(points[i][0] > arrowPos){
                arrows++;
                arrowPos = points[i][1];
            }
        }
        return arrows;
    }
};