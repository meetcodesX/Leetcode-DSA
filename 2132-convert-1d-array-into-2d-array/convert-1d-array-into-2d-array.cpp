class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        int k = 0;
        if(original.size() != m*n) return {};

        for(int i=0;i<m;i++){
            vector<int> row;
            for(int j=0;j<n;j++){
                row.push_back(original[k]);
                k++;
            }
            ans.push_back(row);
        }
        return ans;
    }
};