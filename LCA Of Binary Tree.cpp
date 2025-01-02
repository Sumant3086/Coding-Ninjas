// LCA Of Binary Tree
// Moderate
// 0/80
// Average time to solve is 10m
// Contributed by
// 73 upvotes
// Asked in companies
// Problem statement
// You have been given a Binary Tree of distinct integers and two nodes ‘X’ and ‘Y’. You are supposed to return the LCA (Lowest Common Ancestor) of ‘X’ and ‘Y’.



// The LCA of ‘X’ and ‘Y’ in the binary tree is the shared ancestor of ‘X’ and ‘Y’ that is located farthest from the root.



// Note :
// You may assume that given ‘X’ and ‘Y’ definitely exist in the given binary tree.
// For example :
// For the given binary tree

// LCA of ‘X’ and ‘Y’ is highlighted in yellow colour.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 1 2 3 4 7 -1 -1 -1 -1 -1 -1
// 4 7
// Sample Output 1 :
// 2
// Explanation of Sample Input 1 :

// Sample Input 2 :
// 1 2 3 -1 -1 -1 -1
// 2 3
// Sample Output 2 :
// 1
// Constraints :
// 0 <= 'N' <= 3000
// 0 <= 'DATA' <= 10^4

// Where 'DATA' is a node value of the binary tree.

// Time Limit: 1 sec

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

TreeNode<int>* lca(TreeNode<int>*root,int x,int y){
    if(root==NULL){
        return NULL;
    }
    if(root->data==x || root->data==y){
        return root;
    }
    TreeNode<int>*leftside=lca(root->left,x,y);
    TreeNode<int>*rightside=lca(root->right,x,y);
    if(leftside!=NULL && rightside==NULL){
        return leftside;
    }else if(leftside==NULL && rightside!=NULL){
        return rightside;
    }else if(leftside!=NULL && rightside!=NULL){
        return root;
    }else{
        return NULL;
    }
}

int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
    //    Write your code here
    TreeNode<int>*temp=lca(root,x,y);
    return temp->data;
}