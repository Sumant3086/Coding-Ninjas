//  Binary Tree from Parent Array
// Easy
// 40/40
// Average time to solve is 15m
// Contributed by
// 15 upvotes
// Asked in companies
// Problem statement
// Given an array parent which represents a binary tree such that parent-child relationship is defined by ('PARENT'[i], 'i') which means that parent of i is 'PARENT'[i]. The value of the root node will be i if -1 is present at 'PARENT'[i].

// For example:

// For the parent array {1, -1, 1}, the tree will be:- 

// As, parent of 0 is 'PARENT'[0] i.e. 1.
// 1 is the root as 'PARENT'[1] = -1.
// Parent of 2 is 'PARENT'[2] i.e. 1.
// Similarly for the parent array { 1, 2, -1}, the tree will be:-


// Your task is to create the Binary tree from the given parent array.

// Note:

// From the parent array, multiple binary trees may be possible. You have to create a binary tree in such a way that these conditions satisfy:-

// If the node has a left child as well as a right child, make sure the left child is smaller than the right child. 

// If the node has only one child, make sure it has an only left child. 

// For {1, -1, 1}, the accepted tree will be:- 

// And for {1, -1}, the accepted tree will be, 

// Instead of 

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= 'T' <= 100
// 1 <= 'N' <= 3000

// Where 'T' is the number of test cases and 'N' denotes the number of nodes in the tree.

// Time limit: 1 sec.
// Sample input 1:
// 2
// 2
// 1 -1 
// 6
// -1 0 1 2 2 3 
// Sample output 1:
// 1 0 -1 -1 -1 
// 0 1 -1 2 -1 3 4 5 -1 -1 -1 -1 -1 
// Explanation for Sample Input 1:
// For test case 2: The resulting tree will be:- 


#include <bits/stdc++.h> 
/**********************************************************

    Following is the Binary Tree Node class structure

    template <typename T>
    class BinaryTreeNode {
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

***********************************************************/
 
 BinaryTreeNode<int> *createTree(vector<int> parent) {
         if(parent.empty())return NULL;
        unordered_map<int, BinaryTreeNode<int>*>nodes;
        BinaryTreeNode<int>* root=NULL;
        for(int i=0;i<parent.size();++i){
            if(nodes.find(i)==nodes.end()){
                nodes[i]=new BinaryTreeNode<int>(i);
            }
            int parentIndex=parent[i];
            if(parentIndex==-1){
                root=nodes[i];
            }else{
                  if(nodes.find(parentIndex)==nodes.end()) {
                    nodes[parentIndex]=new BinaryTreeNode<int>(parentIndex);
                }
                BinaryTreeNode<int>* parentNode=nodes[parentIndex];
                if(parentNode->left==NULL) {
                    parentNode->left=nodes[i];
                }else{
                    parentNode->right=nodes[i];
                }
            }
        }
        return root;
    }
    
    void levelOrderTraversal(BinaryTreeNode<int>* root){
        if(root==NULL)return;
        queue<BinaryTreeNode<int>*> q;
        q.push(root);
        while(!q.empty()){
            BinaryTreeNode<int>* current=q.front();
            q.pop();
            cout<<current->data<<" ";
            if(current->left)q.push(current->left);
            if(current->right)q.push(current->right);
        }
        cout<<endl;
    }