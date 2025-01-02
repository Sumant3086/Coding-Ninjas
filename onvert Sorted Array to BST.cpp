// Convert Sorted Array to BST
// Easy
// 40/40
// Average time to solve is 15m
// Contributed by
// 28 upvotes
// Asked in companies
// Problem statement
// You have been given a sorted array of length ‘N’. You need to construct a balanced binary search tree from the array. If there can be more than one possible tree, then you can return any.

// Note:

// 1. A balanced binary tree is a binary tree structure in which the left and right subtrees of every node differ in height by no more than 1.

// 2. A binary search tree is a binary tree data structure, with the following properties
//     a. The left subtree of any node contains nodes with value less than the node’s value.
//     b. The right subtree of any node contains nodes with values equal to or greater than the node’s value.
//     c. Right, and left subtrees are also binary search trees.
// Example:

// Below tree, is a balanced binary search tree

// Below tree is not a balanced tree as the height of the left subtree and right subtree of node ‘5’ differs by more than 1. Moreover, the tree is also not a BST as node ‘2’ is less than node ‘3’ but ‘2’ is the right child of ‘3’.

// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 2
// 5
// 1 2 3 4 5
// 1
// 12 
// Sample Output 1:
// 1
// 1
// Explanation of Sample Input 1:
// For the first test case, one of the possible balanced BST will look like.

// Level order traversal of the above tree is [ 3, 2, 5, 1, -1, 4 ], if you return this tree then you will get the output as 1.

// For the second test case, the tree has only one node that is ‘12’.
// Level order traversal is [ 12 ], if you return this tree then you will get the output as 1.
// Sample Input 2:
// 1
// 2
// 5 17
// Sample Output 2:
// 1
// Explanation of Sample Input 2:
// The tree will look like this.

// Another possible tree is

// Level order traversal is [ 17, 5 ] and [ 5, -1, 17 ], if you return any of this tree you will get the output as 1.

// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the TreeNode class structure

//     template <typename T>
//     class TreeNode {
//        public:
//         T val;
//         TreeNode<T> *left;
//         TreeNode<T> *right;
        
//         TreeNode(T val) {
//             this->val = val;
//             left = NULL;
//             right = NULL;
//         }
//     };

// ************************************************************/

// TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
// {
//     // Write your code here.
// }
 
// class Solution {
// public:
//     TreeNode<int>* sortedArrToBST(vector<int>& arr,int n) {
//         return sortedArrayToBSTHelper(arr,0,n-1);
//     }
// private:
//     TreeNode<int>* sortedArrayToBSTHelper(const vector<int>& arr, int start, int end) {
//         if(start>end){
//             return nullptr;
//         }
//         int mid=start+(end-start)/2;
//         TreeNode<int>* root=new TreeNode<int>*(arr[mid]);
//         root->left=sortedArrayToBSTHelper(arr,start,mid-1);
//         root->right=sortedArrayToBSTHelper(arr,mid+1,end);
//         return root;
//     }
// };
//     TreeNode<int>* sortedArrToBST(vector<int> &arr,int n){
//     Solution sol;
//     return sol.sortedArrToBST(arr,n);
// }


#include <bits/stdc++.h> 
using namespace std;

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

template <typename T>
class Solution {
public:
    TreeNode<T>* sortedArrToBST(vector<T>& arr, int n) {
        return sortedArrayToBSTHelper(arr, 0, n-1);
    }

private:
    TreeNode<T>* sortedArrayToBSTHelper(const vector<T>& arr, int start, int end) {
        if (start > end) {
            return nullptr;
        }
        int mid = start + (end - start) / 2;
        TreeNode<T>* root = new TreeNode<T>(arr[mid]);
        root->left = sortedArrayToBSTHelper(arr, start, mid - 1);
        root->right = sortedArrayToBSTHelper(arr, mid + 1, end);
        return root;
    }
};

// To use the sortedArrToBST function
template <typename T>
TreeNode<T>* sortedArrToBST(vector<T> &arr, int n) {
    Solution<T> sol;
    return sol.sortedArrToBST(arr, n);
}
