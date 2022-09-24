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
    vector<vector<int>> paths;
    void getPathSum(TreeNode* root, int sum, vector<int> path, int res){
        
        if( root == NULL){
            return;
        }
      path.push_back(root->val);
        sum += root->val;


        getPathSum(root->left, sum, path, res);
        getPathSum(root->right, sum, path, res);

    
        if(root->left == NULL && root->right == NULL && res == sum){
            paths.push_back(path);
            return;
        }
    }

    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> path;
        int tmp = 0;
        getPathSum(root, tmp, path, sum);
        
        return paths;
    }
};