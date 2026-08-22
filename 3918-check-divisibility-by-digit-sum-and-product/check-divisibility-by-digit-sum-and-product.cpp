class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n > 0){
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
    int digitProd(int n){
        int prod = 1;
        while(n > 0){
            prod *= n%10;
            n /= 10;
        }
        return prod;
    }
    bool checkDivisibility(int n) {
        if(n%(digitSum(n)+digitProd(n)) == 0) return true;
        return false;
    }
};