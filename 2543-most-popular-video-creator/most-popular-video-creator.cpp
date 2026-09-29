class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        int n = creators.size();
        unordered_map<string,long long> total;
        unordered_map<string,int> maxViews;
        unordered_map<string,string> bestVideo;

        for(int i=0;i<n;i++){
            string creator = creators[i];
            string id = ids[i];
            int v = views[i];
            total[creator] += v;

            if(!bestVideo.count(creator) || v > maxViews[creator] || 
            (v == maxViews[creator] && id < bestVideo[creator])){
                maxViews[creator] = v;
                bestVideo[creator] = id;
            }
        }

        //total maximum views
        long long maxi = 0;
        for(auto &it : total){
            maxi = max(maxi,it.second);
        }

        vector<vector<string>> ans;
        for(auto &it : total){
            if(it.second == maxi){
                ans.push_back({it.first,bestVideo[it.first]});
            }
        }
        return ans;
    }
};