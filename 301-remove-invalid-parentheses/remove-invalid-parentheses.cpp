class Solution {
public:
    vector<string> ans;
    void dfs(string &s,int idx,int left,int right,int balance,string curr) {

        // End
        if (idx == s.size()) {
            if (left == 0 && right == 0 && balance == 0) {
                ans.push_back(curr);
            }
            return;
        }
        char ch = s[idx];

        // Remove current character
        if (ch == '(' && left > 0) {
            dfs(s, idx + 1, left - 1, right, balance, curr);
        }
        if (ch == ')' && right > 0) {
            dfs(s, idx + 1, left, right - 1, balance, curr);
        }

        // Keep current character
        if (ch == '(') {
            dfs(s, idx + 1, left, right, balance + 1, curr + ch);
        }
        else if (ch == ')' && balance > 0) {
            dfs(s, idx + 1, left, right, balance - 1, curr + ch);
        }
        else if (ch != '(' && ch != ')') {
            dfs(s, idx + 1, left, right, balance, curr + ch);
        }
    }

    vector<string> removeInvalidParentheses(string s) {
        int left = 0;
        int right = 0;

        // Find minimum removals
        for (char ch : s) {
            if (ch == '(') {
                left++;
            }
            else if (ch == ')') {
                if (left > 0)
                    left--;
                else
                    right++;
            }
        }

        dfs(s, 0, left, right, 0, "");

        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};