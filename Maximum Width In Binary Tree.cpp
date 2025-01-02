//  Maximum Width In Binary Tree
// Moderate
// 80/80
// Average time to solve is 38m
// Contributed by
// 58 upvotes
// Asked in companies
// Problem statement
// You have been given a Binary Tree of integers. You are supposed to return the maximum width of the given Binary Tree. The maximum width of the tree is the maximum width among all the levels of the given tree.



// The width of one level is defined as the length between the leftmost and the rightmost, non-null nodes in the level, where the null nodes in between the leftmost and rightmost are excluded into length calculation.



// For example :
// For the given binary tree

// The maximum width will be at the third level with the length of 3, i.e. {4, 5, 6}.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 1 2 3 4 -1 5 6 -1 7 -1 -1 -1 -1 -1 -1
// Sample Output 1 :
// 3
// Explanation of Sample Input 1 :
//  The maximum width will be at the third level with the length of 3, i.e. {4, 5, 6}.

// Sample Input 2 :
// 2 7 5 2 6 -1 9 -1 -1 5 11 4 -1 -1 -1 -1 -1 -1 -1
// Sample Output 2 :
// 3
// Constraints :
// 0 <= 'N' <= 5 * 10 ^ 5
// 0 <= 'DATA' <= 10 ^ 6 and data != -1
// Where ‘N’ is the total number of nodes in the binary tree, and 'DATA' is the value of the binary tree node.

// Time Limit: 1sec.

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

int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    if(!root)return 0;
        queue<TreeNode<int>*>q;
        q.push(root);
        int maxW=0;
        while(!q.empty()){
            int levelW=q.size();
            maxW=max(maxW,levelW);
            for(int i=0;i<levelW;i++){
                TreeNode<int>* curr=q.front();
                q.pop();
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
        }
        return maxW;
}