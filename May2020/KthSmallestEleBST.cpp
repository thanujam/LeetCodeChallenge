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
//int index = 0;
class Solution {
public:
    int index;
    int kthSmallest(TreeNode* root, int k) {
        if(root == NULL)
            return 0;
        

        if(root->left)
        {
            int t;
            t = kthSmallest(root->left, k);
        
           if(t != 0)
                return t;
        }

        index++;
        if(index == k)
        {
          //  cout<<root->val;
            return root->val;
        }
        else 
            return kthSmallest(root->right, k);
        
    }
};
