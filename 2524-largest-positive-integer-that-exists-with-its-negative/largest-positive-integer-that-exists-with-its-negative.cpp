class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int start = 0;
        int end = n-1;

        while(start < end){
            if(nums[start] + nums[end] == 0) return nums[end];
            else if(nums[start] + nums[end] < 0) start++;
            else end--;
        }
        return -1;
    }
};