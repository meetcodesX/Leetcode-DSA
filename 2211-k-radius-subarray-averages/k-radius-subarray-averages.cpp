class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n,-1);
        long long windowSum = 0;
        int windowSize = 2 * k + 1;
        
        if(n < windowSize) return ans;

        for(int i=0;i<windowSize;i++){
            windowSum += nums[i];
        }
        ans[k] = windowSum / windowSize;

        for(int i=windowSize;i<n;i++){
            windowSum += nums[i] - nums[i - windowSize];
            ans[i-k] = windowSum / windowSize;
        }
        return ans;
    }
};