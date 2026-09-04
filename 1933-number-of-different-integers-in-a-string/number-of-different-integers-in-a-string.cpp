class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_map<string,int> mp;
        int i=0;

        while(i < word.size()){
            if(isalpha(word[i])){
                i++;
               continue;
            }

            string ans = "";
            while(i < word.size() && isdigit(word[i])){
                ans += word[i];
                i++;
            }

            // removing zeroes
            int j=0;
            while(j < ans.size()-1 && ans[j] == '0'){
                j++;
            }
            ans = ans.substr(j);

            mp[ans]++;
        }
        return mp.size();
    }
};