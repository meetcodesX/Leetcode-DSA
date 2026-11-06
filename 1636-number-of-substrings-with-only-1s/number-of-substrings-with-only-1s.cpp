class Solution {
public:
    int numSub(string s) {
        int count = 0,sum = 0,mod = 1e9 + 7;

        for(char ch : s){
            if(ch == '1') count++;
            else count = 0;
            sum = (sum+count) % mod;
        }
        return sum;
    }
};