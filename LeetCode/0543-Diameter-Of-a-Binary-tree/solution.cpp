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
    pair<int,int> diam(TreeNode* root){
        if(root ==NULL){
            return make_pair(0,0);

        }

        pair<int,int> leftInfo = diam(root->left);
        pair<int,int> rightInfo= diam(root->right);

        int currDiam = leftInfo.second + rightInfo.second;

        int finalDiam = max(currDiam, max(leftInfo.first, rightInfo.first));

        int finalHT = max(leftInfo.second,rightInfo.second) +1;

        return make_pair(finalDiam,finalHT);
   }
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int, int> ans = diam(root);
       return ans.first;
    }
};