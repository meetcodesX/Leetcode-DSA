class Solution {
public:
    int alternateDigitSum(int n) {
        int x=n,count=0,ans=0,flag;

        while(x > 0){
            count++;
            x/=10;
        }

        if(count % 2 == 0) flag=-1;
        else flag=1;

        while(n > 0){
            int digit = n%10;
            ans += flag*digit;
            flag *= -1;
            n /= 10;
        }
        return ans;
    }
};