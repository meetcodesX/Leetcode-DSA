class Solution {
public:
    bool canAliceWin(int n) {
        bool aliceTurn = true;
        int take = 10;
        while(n >= take){
            n -= take;
            take--;
            aliceTurn = !aliceTurn;
        }
        return !aliceTurn;
    }
};