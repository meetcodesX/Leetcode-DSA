class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long totalSum = 0;
        long currSum = 0;
        int n = nums.size();

        for(auto num : nums) totalSum += num;

        int mini = INT_MAX;
        int index = 0;
        for(int i=0;i<n;i++){
            currSum += nums[i];
            int avg1 = currSum / (i+1);

            if(i == n-1){
                if(avg1 < mini) return n-1;
                else break;
            }

            int avg2 = (totalSum - currSum) / (n-1-i);
            if(abs(avg1 - avg2) < mini){
                mini = abs(avg1 - avg2);
                index = i;
            }
        }
        return index;
    }
};