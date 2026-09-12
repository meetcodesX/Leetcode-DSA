class Solution {
public:
    long long countPairs(vector<string>& words) {
        unordered_map<string,int> mp;
        long long ans = 0;

        for(string &word : words){
            string key = "";

            for(int i=0;i<word.size();i++){
                int diff = (word[i] - word[0] + 26) % 26;
                key += to_string(diff) + "#";
            }
            ans += mp[key];
            mp[key]++;
        }
        return ans;
    }
};