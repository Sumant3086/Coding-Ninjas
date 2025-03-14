//  Insert Into A Binary Search Tree
// Easy
// 40/40
// Average time to solve is 20m
// Contributed by
// 27 upvotes
// Asked in companies
// Problem statement
// You have been given a root node of the binary search tree and a positive integer value. You need to perform an insertion operation i.e. inserting a new node with the given value in the given binary search tree such that the resultant tree is also a binary search tree.



// If there can be more than one possible tree, then you can return any.



// Note :

// A binary search tree is a binary tree data structure, with the following properties :

//     a. The left subtree of any node contains nodes with a value less than the node’s value.

//     b. The right subtree of any node contains nodes with a value equal to or greater than the node’s value.

//     c. Right, and left subtrees are also binary search trees.
// It is guaranteed that,

//     d. All nodes in the given tree are distinct positive integers.

//     e. The given BST does not contain any node with a given integer value.
// Example, below the tree, is a binary search tree.


// Below the tree is not a BST as node ‘2’ is less than node ‘3’ but ‘2’ is the right child of ‘3’, and node ‘6’ is greater than node ‘5’ but it is in the left subtree of node ‘5’.


// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 1 -1 3 -1 -1 
// 4
// Sample Output 1 :
// 1
// Explanation Of Sample Input 1 :
// For the first test case, the given tree is.

// One possible output tree is

// Sample Input 2:
// 10 2 12 1 3 -1 13 -1 -1 -1 -1 -1 -1
// 11
// Sample Output 2 :
// 1
// Explanation Of Sample Input 2 :
// For the first test case, the given tree is

// The output tree can be.

// Another Possible answer can be.

// Constraints :
// 0 <= N <= 3000
// 1 <= data <= 10 ^ 9
// 1 <= val <= 10 ^ 9

// Where ‘N’ is the total number of nodes in the given binary tree, ‘data’ is the value of the nodes of the given binary tree, and ‘val’ represents the value of node that is to be inserted in the given tree.

// For a single test case, all given ‘data’ and ‘val’ are distinct from each other.

// Time Limit: 1sec


/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left, *right;
        TreeNode() : val(0), left(NULL), right(NULL) {}
        TreeNode(T x) : val(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : val(x), left(left), right(right) {}
    };


************************************************************/

TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Write your code here.
     if(!root){
        return new TreeNode<int>(val);
    }
    if(root->val>val){
        root->left=insertionInBST(root->left,val);
    }else{
        root->right=insertionInBST(root->right,val);
    }
    return root;
}