class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> sq;
        long long sum = 0;

        for(int i=0;i<nums.size();i++){
            sq.push_back(1LL * nums[i] * nums[i]);
        }
        sort(sq.begin(),sq.end(),greater<int>());
        int n = sq.size();

        for(int i=0;i<n;i++){
            if(i < (n+1)/2) sum += sq[i];
            else sum -= sq[i];
        }
        return sum;
    }
};