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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vect;
        if(root == NULL)
            return vect;
        queue<TreeNode*> q1, q2;
        q1.push(root);
        while(!q1.empty()){
            vector<int> v;
            while(!q1.empty()){
            if(q1.front()->left != NULL)
                q2.push(q1.front()->left);
            if(q1.front()->right != NULL)
                q2.push(q1.front()->right);
            v.push_back(q1.front()->val);
            q1.pop();
        }
        vect.push_back(v);
        q1=q2;
        while(!q2.empty()){
            q2.pop();
        }}
        return vect;
    }
};