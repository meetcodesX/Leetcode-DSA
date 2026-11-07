class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        unordered_map<int,vector<int>> mp;

        for (int i=0;i<n;i++) {
            mp[nums[i]].push_back(i);
        }
        for (auto &it : mp) {
            vector<int>& pos = it.second;
            int maxGap = 0;
            for (int i=1;i<pos.size();i++) {
                maxGap = max(maxGap, pos[i] - pos[i - 1]);
            }
            int circularGap = pos[0] + n - pos.back();
            maxGap = max(maxGap,circularGap);
            ans = min(ans,maxGap / 2);
        }
        return ans;
    }
};