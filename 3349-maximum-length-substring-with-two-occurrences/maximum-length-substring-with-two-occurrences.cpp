class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mp;
        int n = s.length();
        int ans = 0;
        int r = 0;
        int l = 0;

        while(r < n){
            mp[s[r]]++;

            while(mp[s[r]] > 2){
                mp[s[l]]--;
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};