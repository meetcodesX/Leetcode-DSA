class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        int m = target.size();

        for(int k=0;k<4;k++){
            bool same = true;

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(k == 0 && mat[i][j] != target[i][j]) same = false;

                    if(k == 1 && mat[n-1-j][i] != target[i][j]) same = false;

                    if(k == 2 && mat[n-1-i][n-1-j] != target[i][j]) same = false;

                    if(k == 3 && mat[j][n-1-i] != target[i][j]) same = false; 
                }
            }
            if(same == true) return true;
        }
        return false;
    }
};