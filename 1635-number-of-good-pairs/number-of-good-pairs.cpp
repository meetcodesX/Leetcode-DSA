class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = 0;

        for(int num : nums){
            ans += mp[num];
            mp[num]++;
        }
        return ans;
    }
};