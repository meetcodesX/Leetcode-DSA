/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if(root == NULL) return true;
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;

        while(!q.empty()){
            int levelSize = q.size();
            int prev;

            for(int i=0;i<levelSize;i++){
                TreeNode* node = q.front();
                q.pop();

                if(level % 2 == 0){ // even case : odd strictly increasing
                    if(node->val % 2 == 0) return false;
                    if(i > 0 && node->val <= prev) return false;
                }
                if(level % 2 == 1){ //odd case : even stritly decreasing
                    if(node->val % 2 == 1) return false;
                    if(i > 0 && node->val >= prev) return false;
                }

                prev = node->val;
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
            }
            level++;
        }
        return true;
    }
};