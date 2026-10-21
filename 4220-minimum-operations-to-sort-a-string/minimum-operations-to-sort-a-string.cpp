class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        bool sorted = true;

        for (int i=1;i<n;i++) {
            if (s[i] < s[i - 1]) {
                sorted = false;
                break;
            }
        }
    
        if (sorted == true) return 0;
        if (n == 2) return -1;

        char minAlpha = *min_element(s.begin(), s.end());
        char maxAlpha = *max_element(s.begin(), s.end());
        if (s[0] == minAlpha || s[n - 1] == maxAlpha) return 1;

        for (int i=1;i<n-1;++i) {
            if (s[i] == minAlpha || s[i] == maxAlpha) return 2;
        }
        return 3;
    }
};