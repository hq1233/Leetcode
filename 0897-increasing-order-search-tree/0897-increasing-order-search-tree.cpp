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
    void insert(TreeNode* &head, TreeNode* &tail, int val)
    {
        if(head==0)
        {
            head=tail=new TreeNode(val);
            return;
        }
        tail->right=new TreeNode(val);
        tail=tail->right;
    }
    
    void in(TreeNode*p,TreeNode* &head, TreeNode* &tail)
    {
        if(p==0)return;
        in(p->left,head,tail);
        insert(head,tail,p->val);
        in(p->right,head,tail);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode *head=0, *tail=0;
        in(root,head,tail);
        return head;
    }
};