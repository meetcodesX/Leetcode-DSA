class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = 1;

        for(int num : nums){
            if(num > 0) mp[num] = 1;
        }
        for(int i=0;i<nums.size();i++){
            if(mp.find(ans) != mp.end()) ans++;
        }
        return ans;
    }
};