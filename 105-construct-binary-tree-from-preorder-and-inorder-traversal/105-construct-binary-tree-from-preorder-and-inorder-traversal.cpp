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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        int index = 0;
        return helper(preorder, inorder, index, 0, inorder.size()-1);
    }
    
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int& index, int left, int right) 
    {
        if (left > right) return NULL;
        int pivot = left;  
        while(inorder[pivot] != preorder[index]) pivot++;
        index++;
        TreeNode* newNode = new TreeNode(inorder[pivot]);
        newNode->left = helper(preorder, inorder, index, left, pivot-1);
        newNode->right = helper(preorder, inorder, index, pivot+1, right);
        return newNode;
    }
};