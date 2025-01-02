//  Is Height Balanced Binary Tree
// Moderate
// 80/80
// Average time to solve is 15m
// Contributed by
// 77 upvotes
// Asked in companies
// Problem statement
// You are given the root node of a binary tree.



// Return 'true' if it is a height balanced binary tree.



// Note:
// Height of a tree is the maximum number of nodes in a path from the node to the leaf node.

// An empty tree is a height-balanced tree. A non-empty binary tree is a height-balanced binary tree if
// 1. The left subtree of a binary tree is already the height-balanced tree.
// 2. The right subtree of a binary tree is also the height-balanced tree.
// 3. The difference between heights of left subtree and right subtree must not more than ‘1’.


// Example:

// Input: Consider the binary tree given below:

// Output: 'true'

// Explanation:
// Consider subtree at Node ( 7 ) 
// Left subtree height is ‘0’ and right subtree height is ‘0’, the absolute height difference is ‘0-0 = 0’ and ‘0’ is not more than ‘1’ so subtree at Node ( 7 ) is a height-balanced binary tree. 
// Same for subtrees at Nodes ( 5, 6 ). 

// Consider subtree at Node ( 4 ) 
// Left subtree height is ‘1’ and right subtree height is ‘0’, the absolute height difference is ‘1-0 = 1’ and ‘1’ is not more than ‘1’ so subtree at Node ( 4 ) is a height-balanced binary tree.
// Same for subtree at Node ( 3)

// Consider subtree at Node ( 2 ) 
// Left subtree height is ‘2’ and right subtree height is ‘1’, the absolute height difference is ‘2-1 = 1’ and ‘1’ is not more than ‘1’ so subtree at Node ( 2 ) is a height-balanced binary tree.

// Consider subtree at Node ( 1 ) 
// Left subtree height is ‘3’ and right subtree height is ‘2’, the absolute height difference is ‘3-2 = 1’ and ‘1’ is not more than ‘1’ so subtree at Node ( 1 ) is a height-balanced binary tree.

// Because the root node ( 1 ) is a height-balanced binary tree, so the complete tree is height-balanced.

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
 int getHeight(TreeNode<int>* node) {
         if(node==NULL)
            return 0;
        int leftHeight=getHeight(node->left);
        int rightHeight=getHeight(node->right);
        return 1+max(leftHeight,rightHeight);
    }
    bool isBalancedBT(TreeNode<int>* root){
        if(root==NULL)
            return true;
        int leftHeight=getHeight(root->left);
        int rightHeight=getHeight(root->right);
        if(abs(leftHeight-rightHeight)>1)
            return false;
        return isBalancedBT(root->left) && isBalancedBT(root->right); 
    }