class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26];
        int maxvowel = 0;
        int maxconsonant = 0;

        for(char ch : s){
            int i = ch - 'a';
            freq[i]++;

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                maxvowel = max(maxvowel,freq[i]);
            }
            else{
                maxconsonant = max(maxconsonant,freq[i]);
            }
        }
        return maxvowel + maxconsonant;
    }
};