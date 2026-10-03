class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxFreq = 0;
        int ans = 0;

        for(int num : nums){
            mp[num]++;
        }

        for(auto &it : mp){
            maxFreq = max(maxFreq,it.second);
        }

        for(auto &it : mp){
            if(it.second == maxFreq) ans += it.second;
        }
        return ans;
    }
};