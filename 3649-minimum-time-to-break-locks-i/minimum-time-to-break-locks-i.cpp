
class Solution {
public:
    int ans = INT_MAX;
    void solve(vector<int>& strength, int k, int mask, int broken, int time, int n) {
        if (broken == n) {
            ans = min(ans, time);
            return;
        }

        if (time >= ans) return;
        int x = 1 + broken * k;

        for (int i=0;i<n;i++) {
            if (mask & (1 << i)) continue;
            int need = (strength[i] + x - 1) / x;
            solve(strength,k,mask|(1 << i),broken + 1,time+need,n);
        }
    }

    int findMinimumTime(vector<int>& strength, int k) {
        ans = INT_MAX;
        int n = strength.size();
        solve(strength,k,0,0,0,n);
        return ans;
    }
};
