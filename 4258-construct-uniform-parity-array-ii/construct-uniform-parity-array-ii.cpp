class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minOddNum = INT_MAX;

        //check for odd smallest odd num
        for(int num : nums1){
            if(num % 2 == 1){
                minOddNum = min(minOddNum,num);
            }
        }

        if(minOddNum == INT_MAX) return true;
        
        for(int num : nums1){
            if(num % 2 == 0 && num < minOddNum) return false;
        }
        return true;
    }
};