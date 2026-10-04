class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        int flip = 0;

        for(int i=0;i<nums.size();i++){
            int current = nums[i] ^ flip;
            if(current == 0){
                count++;
                flip ^= 1;
            }
        }
        return count;
    }
};