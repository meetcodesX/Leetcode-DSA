class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> mp;

        for(int num : candyType){
            mp[num]++;
        }
        return min(int(mp.size()), int(candyType.size())/2);
    }
};