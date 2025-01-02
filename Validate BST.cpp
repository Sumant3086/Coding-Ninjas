//  Validate BST
// Moderate
// 80/80
// Average time to solve is 25m
// Contributed by
// 33 upvotes
// Asked in companies
// Problem statement
// You have been given a binary tree of integers with N number of nodes. Your task is to check if that input tree is a BST (Binary Search Tree) or not.

// A binary search tree (BST) is a binary tree data structure which has the following properties.

// • The left subtree of a node contains only nodes with data less than the node’s data.
// • The right subtree of a node contains only nodes with data greater than the node’s data.
// • Both the left and right subtrees must also be binary search trees.
// Example :

// Answer :

// Level 1: 

// All the nodes in the left subtree of 4 (2, 1, 3) are smaller 
// than 4, all the nodes in the right subtree of the 4 (5) are 
// larger than 4.

// Level 2 :

// For node 2:
// All the nodes in the left subtree of 2 (1) are smaller than 
// 2, all the nodes in the right subtree of the 2 (3) are larger than 2.
// For node 5:
// The left and right subtrees for node 5 are empty.

// Level 3:

// For node 1:
// The left and right subtrees for node 1 are empty.
// For node 3:
// The left and right subtrees for node 3 are empty.

// Because all the nodes follow the property of a binary search tree, the above tree is a binary search tree.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 100
// 1 <= N <= 5000
// -10^6 <= data <= 10^6 and data != -1

// where N is the number of nodes in the tree, T represents the number of test cases, and ‘data’ denotes data contained in the node of the binary tree.

// Time Limit: 1 sec
// Sample Input 1 :
// 2
// 3 1 5 -1 2 -1 -1 -1 -1
// 3 2 5 1 4 -1 -1 -1 -1 -1 -1
// Sample Output 1 :
//  true
//  false
// Explanation of the Sample Input1 :
// Here we have 2 test cases, hence there are 2 binary trees

// Test Case 1: 

//  Level 1: 
// For node 3 all the nodes in the left subtree (1,2) are less than 3 and all the nodes in the right subtree (5) are greater than 3. 

// Level 2:
// For node 1:
// The left subtree is empty and all the nodes in the right subtree (2) are greater than 1.  
// For node 5:
// Both right and left subtrees are empty.

// Level 3:
// For node 2, both the right and left subtrees are empty. Because all the nodes follow the property of a binary search tree, the function should return true.

// Test Case 2: 

// For the root node, all the nodes in the right subtree (5) are greater than 3. But node with data 4 in the left subtree of node 3 is greater than 3, this does not satisfy the condition for the binary search tree. Hence, the function should return false. 
// Sample Input 2 :
// 1
// 1 1 2 -1 -1 -1 -1
// Sample Output 2 :
// false
// Explanation of the Sample Input1 :
// As we can see the left child of root is equal to root which violates the property of BST as the left child should be lesser than root.

#include <bits/stdc++.h> 
/*************************************************************
    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode 
    {
      public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() 
        {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/


bool helper(BinaryTreeNode<int>* root,int minVal,int maxVal){
        if(!root)return true;
        if(root->data<=minVal || root->data>=maxVal)return false;
        return helper(root->left,minVal,root->data) && helper(root->right,root->data,maxVal);
    }
    bool validateBST(BinaryTreeNode<int>* root) {
        // Your code here
        return helper(root,INT_MIN,INT_MAX);
    }