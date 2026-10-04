class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int n = s.size();
        int count = 0;
        int l=0,r=1;
        int maxLen = 1;

        while(r < n){
            if(s[r] == s[r-1]) count++;

            while(count > 1){
                if(s[l] == s[l+1]) count--;
                l++;
            }
            maxLen = max(maxLen,r-l+1);
            r++;
        }
        return maxLen;
    }
};