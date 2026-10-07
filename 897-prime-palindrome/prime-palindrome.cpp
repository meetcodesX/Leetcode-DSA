class Solution {
public:

    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i=2;i*i<=n;i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int makePalindrome(int x) {
        string s = to_string(x);
        string rev = s;

        reverse(rev.begin(), rev.end());
        return stoi(s + rev.substr(1));
    }

    int primePalindrome(int n) {
        if (n <= 2) return 2;
        if (n <= 3) return 3;
        if (n <= 5) return 5;
        if (n <= 7) return 7;
        if (n <= 11) return 11;

        int x = 10;
        while(true){
            int p = makePalindrome(x);
            if (p >= n && isPrime(p)) return p;
            x++;
        }
    }
};