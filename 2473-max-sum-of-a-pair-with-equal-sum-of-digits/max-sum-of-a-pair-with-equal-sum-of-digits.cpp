class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n>0){
            sum += n%10;
            n /= 10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = -1;

        for(int num : nums){
            int key = digitSum(num);
            if(mp.find(key) != mp.end()){
                ans = max(ans,mp[key] + num);
                mp[key] = max(mp[key],num);
            }
            else mp[key] = num;
        }
        return ans;
    }
};