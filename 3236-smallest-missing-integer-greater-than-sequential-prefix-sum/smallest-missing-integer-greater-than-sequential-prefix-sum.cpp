class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum = nums[0];

        for(int num : nums){
            mp[num]++;
        }

        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]+1){
                sum += nums[i];
            }
            else break;
        }
        
        while(mp.find(sum) != mp.end()){
            sum++;
        }
        return sum;
    }
};