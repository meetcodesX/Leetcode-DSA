class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int> mp;
        unordered_map<int,string> groups;
        string ans = "";
        int maxSize = 0;
        int bestFreq = 0;

        for(char ch : s) mp[ch]++;
        for(auto it : mp) groups[it.second] += it.first;
        for(auto it : groups){
            int size = it.second.size();
            int f = it.first;

            if(size > maxSize || size == maxSize && f > bestFreq){
                maxSize = size;
                bestFreq = f;
                ans = it.second;
            }
        }
        return ans;
    }
};