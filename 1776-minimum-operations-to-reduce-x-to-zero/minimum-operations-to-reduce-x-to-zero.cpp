class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int total = 0;
        for(int num : nums){
            total += num;
        }

        int target = total - x;
        int l=0,r=0,sum=0;
        int maxLen = -1;

        while(r < n){
            sum += nums[r];

            while(l <= r && sum > target){
                sum -= nums[l];
                l++;
            }
            if(sum == target){
                maxLen = max(maxLen,r-l+1);
            }
            r++;
        }
        if(maxLen == -1) return -1;
        return n - maxLen;
    }
};