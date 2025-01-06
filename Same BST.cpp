// Problem statement
// You are given two binary search trees. Your task is to check whether the two BSTs contains the same set of elements or not.

// The structure of the two given BSTs can be different.

// Note: All elements in a given BST are unique.

// For Example:

// The above two BSTs contain the same set of elements, hence the answer is True.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 100 
// 1 <= N <= 1000

// Time Limit: 1 sec
// Sample Input 1:
// 2
// 8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
// 10 5 -1 -1 2 8 -1 -1 6 -1 -1 
// 26 -1 52 -1 78 -1 -1 
// 26 -1 52 -1 78 -1 -1
// Sample Output 1:
// false
// true 
// Explanation For Sample Output 1:
// In test case 1:
// The  first binary tree will be like the following:

// The elements in the first tree are 8, 5, 10, 2, 6, 7.

// The second tree will be like the following:

// The element in the second tree are 10, 5, 2, 8, 6

// Here the elements are not the same in both the trees, hence the output will be “false”.

// Test Case 2:

// In the second case both trees are identical, and look like this:

// Hence the output will be “true”.
// Sample Input 2:
// 2
// 40 20 60 -1 -1 -1 80 -1 -1 
// 40 20 60 -1 -1 -1 80 -1 -1 
// 9 5 12 2 6 10 15 -1 -1 -1 -1 -1 -1 -1 -1
// 12 9 15 5 10 -1 -1 2  -1 -1 -1 -1 -1
// Sample Output 2:
// true
// false
// C++ (g++ 11)
// 00
//  : 
// 01
//  : 
// 09
// 1234

#include <bits/stdc++.h> 
void helper (TreeNode<int>* root, set<int>& element){
    if(!root)return ;
    helper(root->left,element);
    element.insert(root->data);
    helper(root->right,element);
}
bool checkBSTs(TreeNode<int> *root1, TreeNode<int> *root2){
    // Write your code here.
    set<int>ele1,ele2;
    helper(root1,ele1);
    helper(root2,ele2);
    return ele1==ele2;
}