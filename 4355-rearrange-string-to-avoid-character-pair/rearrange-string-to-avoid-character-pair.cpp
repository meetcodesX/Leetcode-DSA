class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string xc = "";
        string yc = "";
        string others = "";

        for(char ch : s){
            if(ch == x) xc += ch;
            else if(ch == y) yc += ch; 
            else others += ch;
       }
       return yc + others + xc;
    }
};