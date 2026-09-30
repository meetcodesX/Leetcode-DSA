class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        sort(changed.begin(),changed.end());
        int n = changed.size();
        vector<int> ans;
        unordered_map<int,int> mp;

        if(n % 2 == 1) return {};

        for(int num : changed){
            mp[num]++;
        }

        for(int x : changed){
            if(mp[x] == 0) continue;

            int doubled = 2*x;
            if(mp[doubled] == 0) return {};

            ans.push_back(x);

            mp[x]--;
            mp[doubled]--;
        }
        return ans;
    }
};