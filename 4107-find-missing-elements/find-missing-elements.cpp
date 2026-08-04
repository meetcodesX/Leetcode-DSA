class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int minNum = INT_MAX;
        int maxNum = INT_MIN;

        for(int i=0;i<nums.size();i++){
            minNum = min(minNum,nums[i]);
            maxNum = max(maxNum,nums[i]);

            mp[nums[i]]++;
        }


        for(int i=minNum;i<=maxNum;i++){
            if(mp.find(i) == mp.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};