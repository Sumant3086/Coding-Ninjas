// Kth ancestor of a node in binary tree
// Hard
// 120/120
// Average time to solve is 50m
// 39 upvotes
// Asked in companies
// Problem statement
// You are given an arbitrary binary tree consisting of N nodes numbered from 1 to N, an integer 'K', and a node 'TARGET_NODE_VAL' from the tree. You need to find the Kth ancestor of the node 'TARGET_NODE_VAL'. If there is no such ancestor, then print -1.

// The Kth ancestor of a node in a binary tree is the Kth node in the path going up from the given node to the root of the tree. Refer to sample test cases for further explanation.

// Note:
// 1. The given node 'TARGET_NODE_VAL' is always present in the tree.
// 2. The value of each node in the tree is unique.
// 3. Notice that the Kth ancestor node if present will always be unique.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 100
// 1 <= N <= 3000
// 1 <= K <= 10^9
// 1 <= NODE_VAL <= 10^9

// Time Limit: 1 sec
// Sample Input 1:
// 1
// 1 2 3 4 5 -1 -1 -1 -1 -1 -1
// 5 2
// Sample Output 1:
// 1
// Explanation for sample input 1:

// The path from the given node 5 to root 1 is 5 -> 2 -> 1
// So the 2nd ancestor of 5 is 1
// Sample Input 2:
// 1
// 1 2 3 4 5 -1 -1 -1 -1 -1 -1
// 4 1
// Sample Output 2:
// 2
// Explanation for sample input 2:

// The path from the given node 4 to root 1 is 4 -> 2 -> 1
// So  the 1st ancestor of 4 is 2

#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

int dfs(BinaryTreeNode<int> *root, int targetNodeVal, int &k){
    if(root==nullptr)return -1;
    if(root->data==targetNodeVal)return root->data;
    int left=dfs(root->left,targetNodeVal,k);
    int right=dfs(root->right,targetNodeVal,k);
      if(left!=-1 || right!=-1){
        if(k>0){
            k--;
            return root->data;
        }else{
            return left!=-1?left:right;
        }
    }
    return -1;
} 
int findKthAncestor(BinaryTreeNode<int> *root, int targetNodeVal, int k)
{
    // Code here
    int ans=dfs(root,targetNodeVal,k);
    if(k>0)return -1;
    return ans;
}
