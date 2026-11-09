class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        unordered_map<char,int> mp;
        int ans = 0;
        int n = s.size();
        int r = 0;
        int l = 0;
        int good = 0;

        while(r < n){
            mp[s[r]]++;

            if(mp[s[r]] == k){
                good++;
            }
            while(good > 0){
                if(mp[s[l]] == k) good--;
                mp[s[l]]--;
                l++;
            }
            ans += l;
            r++;
        }
        return ans;
    }
};