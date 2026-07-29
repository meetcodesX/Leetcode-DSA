class Solution {
public:
    int solve(vector<int>& nums,int start,int end){
        int next1 = 0;
        int next2 = 0;

        for(int i=end;i>=start;i--){
            int curr = max(nums[i] + next2,next1);

            next2 = next1;
            next1 = curr;
        }
        return next1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];

        int case1 = solve(nums,0,n-2);
        int case2 = solve(nums,1,n-1);

        return max(case1,case2);
    }
};