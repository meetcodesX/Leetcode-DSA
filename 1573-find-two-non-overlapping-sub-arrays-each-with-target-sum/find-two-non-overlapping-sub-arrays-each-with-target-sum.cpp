class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> num(n,INT_MAX);
        int l=0,r=0;
        int sum = 0;
        int minLen = INT_MAX;
        int ans = INT_MAX;

        while(r < n){
            sum += arr[r];

            while(sum > target){
                sum -= arr[l];
                l++;
            }

            if(sum == target){
                if(l > 0 && num[l-1] != INT_MAX){
                    ans = min(ans,num[l-1] + r-l+1);
                }
                minLen = min(minLen,r-l+1);
            }
            num[r] = minLen;
            r++;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};