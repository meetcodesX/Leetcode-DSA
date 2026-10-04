class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0;
        long long sum2 = 0;
        int zero1 = 0;
        int zero2 = 0;

        for(int num : nums1){
            if(num == 0) zero1++;
            sum1 += num;
        }
        for(int num : nums2){
            if(num == 0) zero2++;
            sum2 += num;
        }

        long long min1 = sum1 + zero1;
        long long min2 = sum2 + zero2;

        if(min1 == min2) return min1;

        if(min1 < min2){
            if(zero1 == 0) return -1;
            return min2;
        }

        if(min1 > min2){
            if(zero2 == 0) return -1;
            return min1;
        }
        return min1;
    }
};