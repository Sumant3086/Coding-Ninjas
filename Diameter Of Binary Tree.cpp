//  Diameter Of Binary Tree
// Easy
// 40/40
// Average time to solve is 10m
// Contributed by
// 84 upvotes
// Asked in companies
// Problem statement
// You are given a Binary Tree.



// Return the length of the diameter of the tree.



// Note :
// The diameter of a binary tree is the length of the longest path between any two end nodes in a tree.

// The number of edges between two nodes represents the length of the path between them.
// Example :
// Input: Consider the given binary tree:

// Output: 6

// Explanation:
// Nodes in the diameter are highlighted. The length of the diameter, i.e., the path length, is 6.


// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 1 2 3 4 7 -1 -1 -1 -1 -1 -1


// Sample Output 1 :
// 3


// Explanation of Sample Input 1 :
// The binary tree in the given test case will look like

// The length of the diameter of the above tree is the length of the path between nodes 4 and 3, i.e., 4->2->1->3. Hence the output will be 3.


// Sample Input 2 :
// 1 2 3 -1 -1 -1 -1


// Sample Output 2 :
// 2


// Explanation of Sample Input 2 :
// The binary tree in the given test case will look like

// The length of the diameter of the above tree is the length of the path between nodes 2 and 3, i.e., 2.


// Expected Time Complexity:
// Try to do this in O(n).


// Constraints:
// 1 <= n <= 10000

// Where 'n' is the total number of nodes in the binary tree.

// Time Limit: 1 sec


/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
 
int maxD=0;
int maxDepth(TreeNode<int>* root) {
    if(!root){
        return 0;
    }
    int leftM=maxDepth(root->left);
    int rightM=maxDepth(root->right); 
    int currD=leftM+rightM;
    maxD=max(maxD,currD);
    return max(leftM,rightM)+1;
}
int diameterOfBinaryTree(TreeNode<int>* root) {
    maxDepth(root);
    return maxD;
}

 
