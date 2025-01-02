//  Top View Of Binary Tree
// Moderate
// 80/80
// Average time to solve is 25m
// Contributed by
// 160 upvotes
// Asked in companies
// Problem statement
// You are given a Binary Tree of 'n' nodes.



// The Top view of the binary tree is the set of nodes visible when we see the tree from the top.



// Find the top view of the given binary tree, from left to right.



// Example :
// Input: Let the binary tree be:

// Output: [10, 4, 2, 1, 3, 6]

// Explanation: Consider the vertical lines in the figure. The top view contains the topmost node from each vertical line.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 1 2 3 4 5 -1 6 -1 7 -1 -1 8 -1 9 -1 -1 11 10 -1 -1 -1 -1 -1


// Sample Output 1:
// 10 4 2 1 3 6


// Explanation of Sample Output 1:
// The binary tree is:

// Consider the vertical lines in the figure. The top view contains the topmost node from each vertical line.
// In test case 1,



// Sample Input 2:
// 1 2 3 4 5 6 7 8 9 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1


// Sample Output 2:
// 8 4 2 1 3 7


// Explanation of Sample Output 2:
// The binary tree is:

// From left to right, the top view of the tree will be [8,4,2,1,3,7], where 9, 5 and 6 will be hidden when we see from the top of the tree.


// Expected time complexity :
// The expected time complexity is O(n * log(n)).


// Constraints:
// 1 <= 'n' <= 10000
// 1 <= data in any node <= 10 ^ 6

// Time limit: 1 sec

/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T dat)
        {
            this->data = dat;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <bits/stdc++.h>
vector<int> getTopView(TreeNode<int> *root)
{
    // Write your code here.
    vector<int>ans;
        if(root==nullptr)return ans;
        queue<pair<TreeNode<int>*,int>>q;
        map<int,int>topNodes;
        q.push({root,0});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            TreeNode<int>* current=p.first;
            int horDis=p.second;
            if(topNodes.find(horDis)==topNodes.end()){
                topNodes[horDis]=current->data;
            }
            if(current->left){
                q.push({current->left,horDis-1});
            }
            if(current->right){
                q.push({current->right,horDis+1});
            }
        }
        for(const auto& node:topNodes){
            ans.push_back(node.second);
        }
        return ans;
}
