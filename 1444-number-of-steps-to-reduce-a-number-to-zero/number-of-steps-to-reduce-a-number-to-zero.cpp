class Solution {
public:
    int numberOfSteps(int num) {
        int temp=0,count=0;
        while(num > 0){
            if(num % 2 == 0){
                num = num/2;
                count += 1;
            }
            if(num % 2 == 1){
                num = num-1;
                count += 1;
            }
        }
        return count;
    }
};