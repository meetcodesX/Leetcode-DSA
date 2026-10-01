class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();

        for(int i=0;i<n;i++){
            bool champion = true;

            for(int j=0;j<n;j++){
                if(grid[i][j] == 0 && i != j){
                    champion = false;
                    break;
                }
            }
            if(champion == true) return i;
        }
        return -1;
    }
};