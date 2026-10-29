class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char, int> mp;

        for (char ch : s) mp[ch]++;
        for (int i=0;i<s.size()-1;i++) {
            if(s[i] != s[i + 1] && mp[s[i]] == s[i] - '0' && mp[s[i + 1]] == s[i + 1] - '0') {
                return s.substr(i, 2);
            }
        }
        return "";
    }
};
