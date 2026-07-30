class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int num : nums){
            if(num%2 == 0) mp[num]++;
        }

        int ans = -1;
        int maxfreq = 0;

        for(auto it : mp){
            if(it.second > maxfreq){
                maxfreq = it.second;
                ans = it.first;
            }
            else if(it.second == maxfreq && it.first < ans){
                ans = it.first;
            }
            
        }
        return ans;
    }
};