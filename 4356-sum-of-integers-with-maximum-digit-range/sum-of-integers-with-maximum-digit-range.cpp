class Solution {
public:
    int digitRange(int n) {
        int largest = INT_MIN;
        int smallest = INT_MAX;
        while(n > 0) {
            int digit = n % 10;
            n /= 10;

            largest = max(largest, digit);
            smallest = min(smallest, digit);
        }
        return largest - smallest;
    }

    int maxDigitRange(vector<int>& nums) {
        int maxRange = 0;
        int sum = 0;
        for(int i=0;i<nums.size();i++) {
            maxRange = max(maxRange, digitRange(nums[i]));
        }

        for(int i=0;i<nums.size();i++) {
            if(digitRange(nums[i]) == maxRange) {
                sum += nums[i];
            }
        }
        return sum;
    }
};