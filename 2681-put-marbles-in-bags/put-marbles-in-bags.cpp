class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        vector<long long> pairs;
        int n = weights.size();
        long long ans = 0;

        for(int i=0;i<n-1;i++){
            pairs.push_back((long long)weights[i] + weights[i+1]);
        }
        sort(pairs.begin(),pairs.end());

        long long mini = 0;
        long long maxi = 0;
        for(int i=0;i<k-1;i++){
            mini += pairs[i];
            maxi += pairs[n-2-i];
        }
        return maxi - mini;
    }
};