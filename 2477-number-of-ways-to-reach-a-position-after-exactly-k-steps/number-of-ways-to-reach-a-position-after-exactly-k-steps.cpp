class Solution {
public:
    int numberOfWays(int startPos, int endPos, int k) {
        const int MOD = 1e9 + 7;

        unordered_map<long long, long long> dp;
        dp[startPos] = 1;

        for(int step=0;step<k;step++) {
            unordered_map<long long, long long> next;

            for (auto& [pos,ways] : dp) {
                next[pos + 1] = (next[pos + 1] + ways) % MOD;
                next[pos - 1] = (next[pos - 1] + ways) % MOD;
            }
            dp = next;
        }
        return dp[endPos];
    }
};
