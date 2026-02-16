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
    void inorder(vector<int>& v,TreeNode* root){
        if(root==nullptr){
            return ;
        }
        inorder(v,root->left);
        v.push_back(root->val);
        inorder(v,root->right);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> vec;
        inorder(vec,root);
        vector<int> vec1=vec;
        sort(vec1.begin(),vec1.end());
        if(vec!=vec1) return false;
        for(int i=1;i<vec.size();i++){
            if(vec[i-1]==vec[i]) return false;
        }
        return true;
    }
};