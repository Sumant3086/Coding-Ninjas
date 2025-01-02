// Problem statement
// You are given an arbitrary binary tree consisting of N nodes, where each node is associated with a certain value, your task is to find the maximum width of the given tree.

// Width of a binary tree is defined as the maximum width of all levels.

// For example, consider the following binary tree: 

// For the above tree, width of level 1 is 1, width of level 2 is 2, width of level 3 is 3 and width of level 4 is 1. So the maximum width of the tree is 3.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 100
// 0 <= N <= 3000
// -10^6 <= data <= 10^6 and data != -1

// Where ‘T’ is the number of test cases, ‘N’ is the total number of nodes in the binary tree, and “data” is the value of the binary tree node.

// Time Limit: 1sec
// Sample Input 1:
// 2
// 5 6 2 4 3 -1 -1 9 7 -1 -1 -1 -1 -1 -1
// 1 -1 -1
// Sample Output 1:
// 2
// 1
// Explanation of Sample Input 1:

// For the first test case, the width of 1st level is 1 and for the remaining levels it is 2. So, the maximum width of the binary tree is 2.

// For the second test case, the binary tree has only one level having 1 element i.e. root. Hence, the maximum width of the binary tree is 1.
// Sample Input 2:
// 2
// 1 2 3 4 5 6 7 8 9 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
// 1 2 3 4 5 -1 -1 -1 -1 -1 -1
// Sample Output 2:
// 4
// 2

#include <bits/stdc++.h> 
/*******************************************
  Following is the BinaryTreeNode structure

    template<typename T>
    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

********************************************/

int getMaxWidth(BinaryTreeNode<int> *root)
{
    // Write Your code here
if(!root)return 0;
        queue<BinaryTreeNode<int>*>q;
        q.push(root);
        int maxW=0;
        while(!q.empty()){
            int levelW=q.size();
            maxW=max(maxW,levelW);
            for(int i=0;i<levelW;i++){
                BinaryTreeNode<int>* curr=q.front();
                q.pop();
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
        }
        return maxW;
}