class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string,int> freq;
        unordered_map<string,int> lastseen;
        int maxfreq = 0;
        string ans = "";

        for(int day=0;day<responses.size();day++){
            for(string word : responses[day]){
                if(lastseen[word] != day+1){
                    freq[word]++;
                    lastseen[word] = day+1;
                }
            }
        }

        for(auto &it : freq){
            if(it.second > maxfreq || it.second == maxfreq && it.first < ans){
                maxfreq = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};