//  Distance between two nodes of a Tree
// Moderate
// 80/80
// Average time to solve is 25m
// Contributed by
// 26 upvotes
// Asked in companies
// Problem statement
// Given a binary tree and the value of two nodes, find the distance between the given two nodes of the Binary Tree.

// Distance between two nodes is defined as the minimum number of edges in the path from one node to another.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10 ^ 2
// 1 <= N <= 3 * 10 ^ 3
// 0 <= DATA <= 10 ^ 6 and DATA != -1

// Where ‘T’ is the number of test cases, ‘N’ is the total number of nodes in the binary tree, and ‘DATA’ is the value of the binary tree node.

// Time Limit: 1 sec.
// Sample Input 1:
// 2
// 5 6 2 4 3 -1 -1 9 7 -1 -1 -1 -1 -1 -1
// 7 2
// 1 3 -1 2 -1 -1 -1
// 2 4
// Sample Output 1:
// 4
// -1
// Explanation of Sample Input 1:

// For the first test case, the distance between node 7 and node 2 will be 4 as there are 4 edges between these two given nodes, i.e. 7 -> 4, 4 -> 6, 6 -> 5, and 5 -> 2. 

// For the second test case, the answer will be -1 as node 4 is not present in the binary tree.
// Sample Input 2:
// 2
// 1 2 3 4 5 6 7 8 9 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
// 7 1
// 1 2 3 4 5 -1 -1 -1 -1 -1 -1
// 3 5
// Sample Output 2:
// 2
// 3

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
TreeNode<int>* lca(TreeNode<int> *root, int node1, int node2){
    if(root==NULL){
        return NULL;
    }
    if(root->val==node1 || root->val==node2){
        return root;
    }
    TreeNode<int>*leftside = lca(root->left,node1,node2);
    TreeNode<int>*rightside = lca(root->right,node1,node2);
    if(leftside==NULL && rightside!=NULL){
        return rightside;
    }
    else if(leftside!=NULL && rightside==NULL){
        return leftside;
    }else if(leftside!=NULL && rightside!=NULL){
        return root;
    }else{
        return NULL;
    }
}
int finddistance(TreeNode<int>*root,int node1,int level){
    if(root==NULL){
        return -1;
    }
    if(root->val==node1){
        return level;
    }
    int left=finddistance(root->left,node1,level+1);
    if(left==-1){

        return finddistance(root->right,node1,level+1);
    }
    return left;
}
int findDistanceBetweenNodes(TreeNode<int> *root, int node1, int node2){
    TreeNode<int>* ances=lca(root,node1,node2);
    int nod1=finddistance(ances,node1,0);
    int nod2=finddistance(ances,node2,0);
    int ans=nod1+nod2;
    if(ans<0){
        return -1;
    }
    return ans;
}