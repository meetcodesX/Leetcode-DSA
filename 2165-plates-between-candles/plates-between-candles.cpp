class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n = s.size();
        vector<int> prefix(n,0);
        vector<int> left(n,-1);
        vector<int> right(n,-1);

        for(int i=0;i<n;i++){
            if(s[i] == '*'){
                prefix[i] = 1;
            }
            if(i > 0){
                prefix[i] += prefix[i-1];
            }

        }

        // nearest candle from left
        int last = -1;
        for(int i=0;i<n;i++){
            if(s[i] == '|'){
                last = i;
            }
            left[i] = last;
        }

        // nearest candle from right
        last = -1;
        for(int i=n-1;i>=0;i--){
            if(s[i] == '|'){
                last = i;
            }
            right[i] = last;
        }

        vector<int> ans;
        for(auto q : queries) {
            int start = right[q[0]];
            int end = left[q[1]];

            if(start == -1 || end == -1 || start >= end){
                ans.push_back(0);
            }
            else{
                ans.push_back(prefix[end] - prefix[start]);
            }
        }
        return ans;
    }
};