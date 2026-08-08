class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int l = 0;
        int r = 0;
        int maximum = 0;
        int sum = 0;

        while(r < n) {
            mp[nums[r]]++;
            sum += nums[r];

            while(mp[nums[r]] > 1) {
                mp[nums[l]]--;
                sum -= nums[l];
                l++;
            }
            maximum = max(maximum, sum);
            r++;
        }

        return maximum;
    }
};