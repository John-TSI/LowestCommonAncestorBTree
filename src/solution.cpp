#include"../inc/solution.hpp"


TreeNode* Solution::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
{
    if(!root || root==p || root==q){ return root; }  // base cases: empty tree, leaf nodes, target node
    // explore tree recursively
    TreeNode* left = lowestCommonAncestor(root->left,p,q), * right = lowestCommonAncestor(root->right,p,q);

    if(left && right){ return root; }  // both subtrees of current node contain a target node, root is LCA
    if(!left && !right){ return nullptr; }  // reached a leaf node
    return left ? left : right;  // one of current node's subtrees contains a target node, return its address to caller
}    