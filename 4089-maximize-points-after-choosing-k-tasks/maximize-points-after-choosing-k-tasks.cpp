class Solution {
public:
    long long maxPoints(vector<int>& t1, vector<int>& t2, int k) {
        long long ans = 0;
        vector<pair<int,int>> v;

        for(int i=0;i<t1.size();i++){
            v.push_back({t1[i]-t2[i],i});
        }
        sort(v.begin(),v.end(),greater<>());
        for(int i=0;i<k;i++){
            ans += t1[v[i].second];
        }
        for(int i=k;i<t1.size();i++){
            if(v[i].first > 0) ans += t1[v[i].second];
            else ans += t2[v[i].second];
        }
        return ans;
    }
};