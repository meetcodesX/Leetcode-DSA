class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> suffix(n);
        long long minSum = LLONG_MAX;
        int leftmin = nums[0];

        suffix[n-1] = nums[n-1];

        for(int i=n-2;i>=0;i--){
            suffix[i] = min(nums[i],suffix[i+1]);
        }

        for(int j=1;j<n-1;j++){
            if(leftmin < nums[j] && suffix[j+1] < nums[j]){
                long long sum = leftmin + nums[j] + suffix[j+1];
                minSum = min(minSum,sum);
            }
            leftmin = min(leftmin,nums[j]);
        }
        return minSum;
    }
};