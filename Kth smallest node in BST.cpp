//  Kth smallest node in BST
// Moderate
// 0/80
// Average time to solve is 15m
// Asked in companies
// Problem statement
// You have been given a Binary Search Tree of integers. You are supposed to return the k-th (1-indexed) smallest element in the tree.



// For example:
// For the given binary search tree and k = 3

// The 3rd smallest node is highlighted in yellow colour.   
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 3
// 10 5 15 4 7 14 16 -1 -1 -1 -1 -1 -1 -1 -1
// Sample Output 1:
// 7
// Explanation of Sample Input 1:

// The third-smallest node is 7.
// Sample Input 2:
// 2
// -2 -4 1 -5 -1 -1 -1 -1 -1
// Sample Output 2:
// -4
// Explanation of Sample Input 2:
// The second-smallest node is -4.
// Constraints:
// 1 <= N <= 10000
// 1 <= K <= N
// -10^8 <= data <= 10^8 and data != -1

// Where ‘N’ is the total number of nodes in the binary search tree, ‘K’ is the given integer and “data” is the value of the binary search tree node.

// Time Limit: 1sec
// C++ (g++ 11)
// 00
//  : 
// 06
//  : 
// 46
// 111213141516171819202122232425262728293031323334353637
//     if(!root)return -1;
//     stack<TreeNode<int>*>s;
//     TreeNode<int>* curr=root;
//     int count=0;
//     while(!s.empty() || curr){
//         while(curr){
//             s.push(curr);
//             curr=curr->left;
//         }
//         curr=s.top();

// Last saved at 12:55 PM
// Sample test case
// Custom test case




/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(T x) : data(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : data(x), left(left), right(right) {}
    };

************************************************************/
#include <bits/stdc++.h>
int kthSmallest(TreeNode<int> *root, int k)
{
    //  Write the code here.
    if(!root)return -1;
    stack<TreeNode<int>*>s;
    TreeNode<int>* curr=root;
    int count=0;
    while(!s.empty() || curr){
        while(curr){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        count++;
        if(count==k)return curr->data;
        curr=curr->right;
    }
    return -1;
}