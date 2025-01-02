//  Binary Tree Maximum Path Sum
// Moderate
// 80/80
// Average time to solve is 20m
// Contributed by
// 10 upvotes
// Asked in companies
// Problem statement
// You are given a binary tree with ‘N’ nodes.

// Your task is to find the “Maximum Path Sum” for any path.

// Note :

// 1. A ‘path’ is a sequence of adjacent pair nodes with an edge between them in the binary tree.
// 2. The ‘path’ doesn’t need to pass through the root.
// 3. The ‘path sum’ is the sum of the node’s data in that path. 
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 1
// -4 -2 3 -1 -1 1 1 -1 -1 -1 -1
// Sample Output 1 :
// 5
// Explanation For Sample Input 1 :
// The tree will be

// The path marked in yellow is the maximum sum path.
// Sample Input 2 :
// 1
// -2 2 1 -1 -1 -1 -1
// Sample Output 2 :
// 2
// Explanation For Sample Input 2 :
// The tree will be:

// The maximum sum path will only contain one node and marked in yellow.


#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
 

int findMaxSum(TreeNode<int>* root,int &maxSum){
        if(!root)return 0;
        int nodeMax=root->val;
        int leftM=findMaxSum(root->left,maxSum);
        int rightM=findMaxSum(root->right,maxSum);
        if(leftM>0)nodeMax+=leftM;
        if(rightM>0)nodeMax+=rightM;
        maxSum=max(maxSum,nodeMax);
        return max(root->val,root->val+max(leftM,rightM));
}
int maxPathSum(TreeNode<int>* root) {
     int maxSum=INT_MIN;
    findMaxSum(root,maxSum);
    return maxSum;
}