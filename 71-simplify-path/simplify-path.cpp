class Solution {
public:
    string simplifyPath(string path) {

        stack<string> st;
        string temp = "";

        for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') {
                if (temp == "" || temp == ".") {
                    // Ignore
                }
                else if (temp == "..") {
                    if (!st.empty())
                        st.pop();
                }
                else {
                    st.push(temp);
                }
                temp = "";
            }
            else {
                temp += path[i];
            }
        }

        vector<string> dirs;
        while (!st.empty()) {
            dirs.push_back(st.top());
            st.pop();
        }
        reverse(dirs.begin(), dirs.end());
        string ans = "";
        for (string dir : dirs) { 
            ans += "/" + dir;
        }
        return ans.empty() ? "/" : ans;
    }
};