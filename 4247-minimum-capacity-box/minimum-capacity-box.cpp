class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
            int ans = -1;
        int minDiff = INT_MAX;

        for(int i=0;i<capacity.size();i++){
            if(capacity[i] >= itemSize){
                int diff = capacity[i] - itemSize;

                if(diff < minDiff){
                    minDiff = diff;
                    ans = i;
                }
            }
        }
        return ans;
    }
};