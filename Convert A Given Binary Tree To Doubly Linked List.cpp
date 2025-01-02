// Convert A Given Binary Tree To Doubly Linked List
// Moderate
// 80/80
// Average time to solve is 15m
// Contributed by
// 44 upvotes
// Asked in companies
// Problem statement
// Given a Binary Tree, convert this binary tree to a Doubly Linked List.

// A Binary Tree (BT) is a data structure in which each node has at most two children.

// A Doubly Linked List contains a previous pointer, along with the next pointer and data.

// The order of nodes in Doubly Linked List must be the same as Inorder of the given Binary Tree.

// The doubly linked list should be returned by taking the next pointer as right and the previous pointer as left.

// You need to return the head of the Doubly Linked List.

// For the given binary tree :


// You need to return the head to the doubly linked list.
// The doubly linked list would be: 1 2 3 4 5 and can be represented as:

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 100
// 0 <= N <= 3000
// -10 ^ 6 <= data <= 10 ^ 6 and data != -1

// where 'N' is the number of nodes in the tree, 'T' represents the number of test cases and "data" denotes data contained in the node of the binary tree.

// Duplicate elements can be in the right subtree or left subtree.

// Time Limit: 1 sec.
// Note :

// You are not required to print the expected output, and it has already been taken care of. Just implement the function.
// Sample Input 1 :
// 2
// 3 1 5 -1 2 -1 -1 -1 -1
// 9 6 10 4 7 -1 11 -1 -1 -1 -1 -1 -1
// Sample Output 1 :
// 1 2 3 5 
// 4 6 7 9 10 11
// Explanation of Input 1 :
// Here we have 2 test cases; hence there are 2 binary trees.

// Test Case 1 : 

// We can see that the inorder traversal of the given tree is: 1 2 3 5.


// Test Case 2 : 

// We can see that the inorder traversal of the given tree is: 4 6 7 9 10 11.
// Sample Input 2 :
// 2
// 4 6 -1 5 -2 -1 -1 -1 -1
// 1 2 3 4 4 -1 4 -1 -1 -1 -1 -1 -1
// Sample Output 2 :
// 5 6 -2 4 
// 4 2 4 1 3 4

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
 
 BinaryTreeNode<int>* convertToDLL(BinaryTreeNode<int>* root, BinaryTreeNode<int>*& prev) {
        if(!root)return nullptr;
        BinaryTreeNode<int>* head=convertToDLL(root->left,prev);
        if(!prev){
            head=root;
        }else{
            root->left=prev;
            prev->right=root;
        }
        prev=root;
        convertToDLL(root->right,prev);
        return head;
    }
    BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
        BinaryTreeNode<int>* prev=NULL;
        return convertToDLL(root, prev);
    }
    void printDLLForward(BinaryTreeNode<int>* head) {
        BinaryTreeNode<int>* curr=head;
        while(curr!=nullptr){
            cout<<curr->data<<" ";
            curr=curr->right;
        }
        cout<<endl;
    }
    void printDLLBackward(BinaryTreeNode<int>* head) {
        BinaryTreeNode<int>* curr=head;
        while(curr && curr->right){
            curr=curr->right;
        }while(curr){
            cout<<curr->data<<" ";
            curr=curr->left;
        }
        cout<<endl;
    }