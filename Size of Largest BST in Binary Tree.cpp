//  Size of Largest BST in Binary Tree
// Easy
// 40/40
// Average time to solve is 10m
// Contributed by
// 158 upvotes
// Asked in companies
// Problem statement
// You have been given a Binary Tree of 'N' nodes, where the nodes have integer values. Your task is to return the size of the largest subtree of the binary tree which is also a BST.



// A binary search tree (BST) is a binary tree data structure which has the following properties.

// • The left subtree of a node contains only nodes with data less than the node’s data.
// • The right subtree of a node contains only nodes with data greater than the node’s data.
// • Both the left and right subtrees must also be binary search trees.


// Example:
// Given binary tree:

// In the given binary tree, subtree rooted at 2 is a BST and its size is 3.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 2 1 3 -1 -1 -1 -1
// Sample Output 1:
// 3
// Explanation for Sample 1:
// In the given binary tree, subtree rooted at 2 is a BST and its size is 3.

// Sample Input 2 :
// 50 -1 20 -1 30 -1 40 -1 50 -1 -1
// Sample Output 2:
// 4
// Constraints :
// 1 <= 'N' <= 10^5
// 0 <= 'data' <= 10^5     

// where 'N' is the number of nodes and 'data' denotes the node value of the binary tree nodes.

// Time limit: 1 sec

/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
       	//Your code here
int ans=0;
vector<int>traceTree(TreeNode* root){
    if(!root)return vector<int>{0,1,INT_MAX,INT_MIN};
    int min=root->data;
    int max=root->data;
    int size=1;
    if(root->right==NULL && root->left==NULL) return vector<int>{1,1,root->data,root->data};
    int isBST=1;
    if(root->left){
        vector<int>v1=traceTree(root->left);
        if(!v1[1] || root->data<=v1[3])isBST=0;
        size+=v1[0];
        min=v1[2];
    }
    if(root->right){
        vector<int>v1=traceTree(root->right);
        if(!v1[1] || root->data>=v1[2])isBST=0;
        size+=v1[0];
        max=v1[3];
    }
    if(isBST){
        ans=std::max(ans,size);
    }
    return {size,isBST,min,max};
}
    int largestBST(TreeNode* root){
        ans=1;
        traceTree(root);
        return ans;
    }
