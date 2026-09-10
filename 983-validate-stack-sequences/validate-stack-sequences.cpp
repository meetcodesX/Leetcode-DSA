class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int n = 0;
        for(int i=0;i<pushed.size();i++){
            st.push(pushed[i]);

            while(st.empty() == NULL && n < popped.size() && st.top() == popped[n]){
                st.pop();
                n++;
            }
        }
        return st.empty();
    }
};