class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int k = INT_MAX;
        bool flag = true;

        for(int i=0;i<nums.size();i++){
            if(nums[i] != i){
                flag = false;
                k &= i;
            }
        }
        if(flag == true) return 0;
        return k;
    }
};