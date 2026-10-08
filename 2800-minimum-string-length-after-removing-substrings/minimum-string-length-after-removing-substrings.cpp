class Solution {
public:
    int minLength(string s) {
        vector<char> store(26, 0);
        stack<char> st;

        for (char ch : s) {
            if (!st.empty() && ((st.top() == 'A' && ch == 'B') ||
                (st.top() == 'C' && ch == 'D'))) {
                st.pop();
            } 
            else {
                st.push(ch);
            }
        }
        return st.size();
    }
};