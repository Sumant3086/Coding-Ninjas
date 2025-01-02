//  Maximum Path Sum Between Two Leaves
// Hard
// 0/120
// Average time to solve is 50m
// Contributed by
// 81 upvotes
// Asked in companies
// Problem statement
// You are given a non-empty binary tree where each node has a non-negative integer value. Return the maximum possible sum of path between any two leaves of the given tree.

// The path is also inclusive of the leaf nodes and the maximum path sum may or may not go through the root of the given tree.

// If there is only one leaf node in the tree, then return -1.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 100
// 1 <= N <= 5000
// 0 <= data <= 10^5

// Where 'N' is the number of nodes in the tree.

// Time limit: 1 sec
// Sample Input 1:
// 1
// 5 6 2 4 3 -1 -1 9 7 -1 -1 -1 -1 -1 -1
// Sample Output 1:
// 26
// Explanation of the Sample Input 1:

// The paths between the leaves are as follows :
// (1). 9->4->7               (sum = 20)
// (2). 9->4->6->3            (sum = 22)
// (3). 9->4->6->5->2         (sum = 26)
// (4). 7->4->6->3            (sum = 20)
// (5). 7->4->6->5->2         (sum = 24)
// (6). 3->6->5->2            (sum = 16)

// Out of all the above 6 paths, path 9->4->6->5->3 is the maximum sum path with the sum 26.
// Sample Input 2:
// 1
// 2 3 -1 -1 -1
// Sample Output 2:
// -1
// Explanation of Sample Input 2:
// The given tree has only one leaf node (3), thus the answer is -1.


#include <bits/stdc++.h> 
/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int leafNode=0;
int maxsum(TreeNode <int>* root,int& ans){
    if(root==NULL) return 0;
    if(root->right==nullptr && root->left==nullptr){
        leafNode++;
    }
    int lmx=maxsum(root->left,ans);
    int rmx=maxsum(root->right,ans);
    ans=max(ans, (root->val+lmx+rmx));
    return max(lmx,rmx)+root->val;
}
long long int findMaxSumPath(TreeNode<int> *root){
      if(root==NULL)return -1;
    else if(root->right==NULL && root->left==NULL)return -1;
    leafNode=0;
    int ans=0;
    maxsum(root,ans);
     if(leafNode==1)return -1;
    return ans;
}