class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minNum = *min_element(nums.begin(),nums.end());
        int ans = 0;

        for(int num : nums){
            ans += abs(num - minNum);
        }
        return ans;
    }
};