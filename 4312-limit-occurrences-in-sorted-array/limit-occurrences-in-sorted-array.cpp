class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();
        int r = 1;
        int l = 1;
        int count = 1;

        while(r < n){
            if(nums[r] == nums[r-1]){
                count++;
            }
            else{
                count = 1;
            }

            if(count <= k){
                nums[l] = nums[r];
                l++;
            }
            r++;
        }
        return vector<int>(nums.begin(),nums.begin() + l);
    }
};