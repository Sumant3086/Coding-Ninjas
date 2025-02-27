// Problem statement
// A binary tree is a tree where each node has at most two children i.e left child and right child.

// You are given a binary tree, where the structure of the node is as follow -:

// class BinaryTreeNode {
//  int data;      // Value of the node.
//  BinaryTreeNode *left;  // Pointer to left child node.
//  BinaryTreeNode *right; // Pointer to right child node.
//  BinaryTreeNode *next;  // Pointer to next right node at same level. 
// }
// Your task is to connect all the adjacent nodes at the same level in the given binary tree. You can do this by populating each 'next' pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL. Initially, all the next pointers are set to NULL.

// For Example:

// Consider the figure shown below. The left part represents the initial binary tree and right part represents the binary tree after connecting adjacent nodes at the same level.

// In the tree shown in the picture above -:
// The ‘next’ pointer of the node having value 2 is connected to the node having value 3.
// The ‘next’ pointer of the node having value 4 is connected to the node having value 5.
// The ‘next’ pointer of the node having value 5 is connected to the node having value 6.
// The ‘next’ pointer of nodes having value 1, 3, 6 will have a value NULL as there are no next right nodes in their cases.
// Note:

// 1. The structure of the ‘Node’ of a binary tree is already defined. You should not change it.   
// 2. The root of the binary tree is known to you.  
// 3. There is at least one node in the given binary tree.
// 4. You may only use constant extra space.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 100
// 1 <= N <= 3000
// -10^9 <= DATA <= 10^9

// Where ‘T’ is the total number of test cases, ‘N’ is the number of nodes in the given binary tree and 'DATA' is the value in each node.

// Time Limit: 1 sec
// Sample Input 1:
// 1
// 1 2 3 -1 -1 -1 -1
// Sample Output 1:
// 1 # 2 3 #    
// Explanation For Sample Input 1:
// In the first test case, the level order traversal of a binary tree is 1, 2, 3, -1, -1,  thus its root is a node with value 1, and left and right child of the root are nodes with 2 and 3 respectively.
// The initial binary tree and the binary tree after connecting adjacent nodes are shown below
// The output is only for convenience,  It is in level order as connected by the next pointers, with '#' signifying the end of each level.

// Sample Input 2:
// 1
// 1 2 3 4 5 -1 6 -1 -1 -1 -1 -1 -1
// Sample Output 2:
// 1 # 2 3 # 4 5 6 # 
// Explanation For Sample Input 2:
// In the first test case, see problem statement for its explanation.

#include <bits/stdc++.h> 
/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/

void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.
    if(!root)return;
        queue<BinaryTreeNode< int >*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            BinaryTreeNode< int >* prev=NULL;
            for(int i=0;i<size;i++){
              BinaryTreeNode<int> *curr=q.front();
              q.pop();
              if(curr->right)
                q.push(curr->right);
              if(curr->left)
                q.push(curr->left);
              curr->next=prev;
              prev = curr;
            }
        }
}
