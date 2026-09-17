class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> mp;
        vector<string> ans;

        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        for(char ch : row1) mp[ch] = 1;
        for(char ch : row2) mp[ch] = 2;
        for(char ch : row3) mp[ch] = 3;

        for(string s : words){
            int row = mp[tolower(s[0])];
            bool valid = true;
            int i = 1;

            while(i < s.size()){
                if(mp[tolower(s[i])] != row){
                    valid = false;
                    break;
                }
                i++;
            }
            if(valid == true) ans.push_back(s);
        }
        return ans;
    }
};