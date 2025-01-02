//  Maximum Difference Between Node And Ancestor
// Easy
// 40/40
// Average time to solve is 10m
// Contributed by
// 7 upvotes
// Asked in company
// Problem statement
// Given a binary tree, return the maximum absolute difference between a node and its ancestor, for any ancestor-node pair in the binary tree.

// The ancestor of any node is defined as the node/nodes which come above the current node in the binary tree. For example, the root node is ancestor of every node in the binary tree.

// For example :


// In the above figure, we have many nodes which have a node and ancestor relationship.

// Some of them are, and their difference is:

// |1-4|=3
// |2-4|=2
// |3-4|=1
// |6-4|=2
// |7-4|=3
// And more
// Out of all the possible parent ancestor pairs, the one with the maximum absolute difference is between nodes (7 and 4) and (1 and 4) which is 3. Therefore, the answer to this case is 3.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 50
// 1<= N <= 10^3

// Where 'N' denotes the number of nodes in the binary tree.

// Time limit: 1 second
// Sample Input 1 :
// 2
// 6 4 7 -1 -1 -1 8 9 -1 -1 -1 
// 4 1 5 2 -1 6 -1 -1 3 -1 7 -1 -1 -1 -1
// Sample Output 1 :
// 3
// 3
// Explanation Of Sample Input 1 :
// Test Case 1:
// The tree is:

// We can clearly see that the maximum difference pair between node and ancestor is the 6 and 9 pair whose difference is (|6-9|=3). Therefore, we return 3. Note that any other pair lets take for example 8 and 9 gives a difference of (|8-9| = 1 ), which is not the maximum.


// Test Case 2:
// The Tree is:

// The maximum difference pair, in this case, are the nodes 4 and 1 and their difference is (|4-1|=3) and nodes 4 and 7 whose difference is (|7-4|=3) , both of which give a difference of 3. Therefore we return 3.
// Sample Input 2 :
// 2
// 1 2 3 -1 -1 5 6 7 8 -1 -1 -1 -1 -1 -1
// 20 8 22 5 3 -1 25 -1 -1 10 14 -1 -1 -1 -1 -1 -1 
// Sample Output 2 :
// 7
// 17


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

void helper(BinaryTreeNode<int>* root,int &high,int &low,int &ans) {
    if(!root) {
        return;
    }
    ans = max({ans, abs(high - root->data),abs(low-root->data)});
    int th=high,tl=low;
    high=max(high,root->data);
    low=min(low,root->data);
    helper(root->left,high,low,ans);
    helper(root->right,high,low,ans);
    high=th,low=tl;
}
int maxAncestorDiff(BinaryTreeNode<int>* root) {
    if(!root) {
        return 0;
    }
    int high=root->data,low=high,ans=INT_MIN;
    helper(root,high,low,ans);
    return ans;
}
