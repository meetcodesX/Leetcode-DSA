class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();

        if(n == 0) return true;
        if(n > m) return false;

        int idx = 0;
        for(int i=0;i<m;i++){
            if(t[i] == s[idx]) idx++;
            if(idx == n) return true;
        }
        return (idx == n);
    }
};