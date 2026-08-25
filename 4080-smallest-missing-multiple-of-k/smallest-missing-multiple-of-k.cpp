class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;

        for(int num : nums){
            st.insert(num);
        }
        int n = k;
        while(st.count(n) != 0){
            n += k;
        }
        return n;
    }
};