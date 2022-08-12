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
    bool Similar(TreeNode* left,TreeNode *right)
    {
        bool bRet = false;
        
        if(left == NULL && right == NULL)
        {
            return true;
        }
        else if(left == NULL && right != NULL)
        {
            return false;
        }
        else if(left != NULL && right == NULL)
        {
            return false;        
        }
        else if(left->val != right->val)
        {
            return false;
        }
        else
        {
            bRet = Similar(left->left,right->right) && Similar(left->right,right->left);
        }
        
        return bRet;
            
    }
    
    
    
    bool isSymmetric(TreeNode* root) {
        bool bRet = false;
        
        bRet = Similar(root->left,root->right);
        
        return bRet;
    }
};