class Solution {
public:
    string maxValue(string n, int x) {
        int pos;

        if(n[0] == '-'){
            for(int i=1;i<n.size();i++){
                if(n[i] - '0' > x){
                    pos = i;
                    break;
                }
            }
        }
        else{
            for(int i=0;i<n.size();i++){
                if(n[i] - '0' < x){
                    pos = i;
                    break;
                }
            }
        }
        n.insert(pos,to_string(x));
        return n;
    }
};