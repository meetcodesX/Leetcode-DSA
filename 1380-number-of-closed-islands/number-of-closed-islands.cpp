class Solution {
public:
    int m,n;
    int closest(vector<vector<int>>& grid,int i,int j){
        if(i < 0 || i >= m || j < 0 || j >= n) return false;
        if(grid[i][j] == 1) return true;
        grid[i][j] = 1;
  
        return closest(grid,i+1,j) & closest(grid,i-1,j) & closest(grid,i,j+1) & closest(grid,i,j-1);
    }
    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int count = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!grid[i][j]) count += closest(grid,i,j);
            }
        }
        return count;
    }
};