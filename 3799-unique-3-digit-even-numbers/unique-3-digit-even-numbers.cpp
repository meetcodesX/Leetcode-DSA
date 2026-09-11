class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        map<int,int> mp;
        int count = 0;
        for(int digit : digits){
            mp[digit]++;
        }

        for(int i=1;i<=9;i++){
            if(mp[i] == 0) continue;
            mp[i]--;

            for(int j=0;j<=9;j++){
                if(mp[j] == 0) continue;
                mp[j]--;

                // last digit must be even
                for(int k=0;k<=8;k+=2){
                    if(mp[k] > 0) count++;
                }
                mp[j]++;
            }
            mp[i]++;
        }
        return count;
    }
};