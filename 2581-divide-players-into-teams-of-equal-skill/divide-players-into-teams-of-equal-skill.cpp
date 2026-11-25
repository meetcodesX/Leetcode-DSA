class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        sort(skill.begin(),skill.end());
        long long ans = 0;
        int target = skill[0] + skill[n-1];

        for(int i=0;i<n/2;i++){
            int current = skill[i] + skill[n-i-1];
            if(current == target){
                ans += (long long)skill[i] * (long long)skill[n-i-1];
            }
            else return -1;
        }
        return ans;
    }
};