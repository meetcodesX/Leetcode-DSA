class Solution {
public:
    bool checkRecord(string s) {
        int absent=0,late=0;

        for(char ch : s){
            if(ch == 'A'){
                absent++;
                late = 0;
            }
            else if(ch == 'L'){
                late++;
            }
            else{
                late = 0;
            }

            if(absent >= 2) return false;
            if(late >= 3) return false;
        }
        return true;
    }
};