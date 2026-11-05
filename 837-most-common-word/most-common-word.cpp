class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> mp;
        unordered_set<string> ban;
        string ans = "";
        int maxi = 0;

        for(string word : banned){
            ban.insert(word);
        }
        for(char &ch : paragraph){
            if(ch == '.' || ch == ',' || ch == ';' || ch == '!' || ch == '?' || ch == '\'' || ch == ' '){
                ch = ' ';
            }
            ch = tolower(ch);
        }

        stringstream ss(paragraph);
        string word;

        while(ss >> word){
            mp[word]++;
        }
        for(auto it : mp){
            if(ban.find(it.first) == ban.end()){
                if(it.second > maxi){
                    maxi = it.second;
                    ans = it.first;
                }
            }
        }
        return ans;
    }
};