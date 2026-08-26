class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int lastDigit = 0;
        int count = 0;

        for(int num : nums){
            while(num > 0){
                lastDigit = num%10;

                if(lastDigit == digit){
                    count++;
                }
                num /= 10;
            }
        }
        return count;
    }
};