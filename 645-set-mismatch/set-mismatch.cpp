class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicate = -1;
        int missing = -1;

        for(int x : nums) {
            int index = abs(x) - 1;
            if(nums[index] < 0) {
                duplicate = abs(x);
            }
            else {
                nums[index] *= -1;
            }
        }

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                missing = i + 1;
                break;
            }
        }
        return {duplicate, missing};
    }
};