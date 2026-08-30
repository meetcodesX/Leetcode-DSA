class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minNum = min_element(nums.begin(),nums.end()) - nums.begin();
        int maxNum = max_element(nums.begin(),nums.end()) - nums.begin();

        int left = max(minNum,maxNum) + 1;
        int right = n - min(minNum,maxNum);
        int both = minNum + 1 + n - maxNum;
        int both2 = maxNum + 1 + n - minNum;

        return min({left,right,both,both2});
    }
};