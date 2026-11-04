class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int firstSum = 0;
        int secondSum = 0;
        bool firstActive = true;

        for (int i=0;i<nums.size();i++) {
            if (nums[i] % 2 == 1) {
                firstActive = !firstActive;
            }
            // Swap after every 6th game
            if (i % 6 == 5) {
                firstActive = !firstActive;
            }
            // Give points to active player
            if (firstActive) firstSum += nums[i];
            else secondSum += nums[i];
        }
        return firstSum - secondSum;
    }
};