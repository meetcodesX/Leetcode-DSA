class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        unordered_map<char,long long> mp;
        long long total = 0;
        long long maxcost = 0;

        for(int i=0;i<s.size();i++){
            mp[s[i]] += cost[i];
            total += cost[i];
        }
        for(auto it : mp){
            maxcost = max(maxcost,it.second);
        }
        return total - maxcost;
    }
};