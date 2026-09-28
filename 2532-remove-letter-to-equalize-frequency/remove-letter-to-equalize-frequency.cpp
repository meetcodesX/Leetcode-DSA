class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char,int> mp;

        for(char ch : word){
            mp[ch]++;
        }

        for(auto &it : mp){
            it.second--;

            int common = 0;
            bool valid = true;

            for(auto &x : mp){
                if(x.second == 0) continue;
                if(common == 0) common = x.second;
                else if(x.second != common){
                    valid = false;
                    break;
                }
            }
            if(valid == true) return true;
            it.second++;
        }
        return false;
    }
};