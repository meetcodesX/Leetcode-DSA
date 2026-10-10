class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        long long k = 1LL * k1 + k2;
        vector<int> diff(n);
        int mx = 0;
        long long total = 0;

        for (int i=0;i<n;i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            mx = max(mx, diff[i]);
            total += diff[i];
        }

        if (total <= k) return 0;
        int low = 0, high = mx;

        while (low < high) {
            int mid = low + (high - low) / 2;
            long long operations = 0;

            for (int d : diff) {
                operations += max(0, d - mid);
            }

            if (operations <= k)
                high = mid;
            else
                low = mid + 1;
        }

        int level = low;
        long long ans = 0;
        long long used = 0;

        for (int d : diff) {
            int reduced = min(d, level);
            ans += 1LL * reduced * reduced;
            used += d - reduced;
        }
        long long remaining = k - used;

        for (int d : diff) {
            if (remaining == 0) break;

            if (d >= level) {
                ans -= 1LL * level * level;
                ans += 1LL * (level - 1) * (level - 1);
                remaining--;
            }
        }
        return ans;
    }
};