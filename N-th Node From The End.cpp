
// Problem
// Submissions
// Hints & solutions
// Discuss
//  N-th Node From The End
// Easy
// 40/40
// Average time to solve is 10m
// Contributed by
// 13 upvotes
// Asked in companies
// Problem statement
// You are given a Singly Linked List of integers. You have to find the N-th node from end.

// For Example
// If the given list is (1 -> -2 -> 0 -> 4) and N=2:

// Then the 2nd node from the end is 0.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints
// 1 <= T <= 10
// 1 <= L <= 10^4
// -10^9 <= data <= 10^9 
// 1<= N <= L
// data != -1
// Where 'L' is the number of nodes in the linked list, ‘data’ represents the value of the nodes of the list.

// Time Limit:  sec
// Sample Input 1
// 2
// 1 -2 0 4 -1
// 2
// 9 9 -1
// 1
// Sample Output 1
// 0
// 9
// Explanation for Sample Input 1
// In the 1st test case, the 2nd node from the end is 0.
// In the 2nd  test case, the 1st node from the end is 9.
// Sample Input 2
// 2
// 1 1 1 2 5 -1
// 4
// 6 -3 -1
// 2
// Sample Output 2
// 1
// 6

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/


Node* nthNodeFromEnd(Node* head, int n)
{
    // Write your code here
	int len=0;
	for(Node* curr=head;curr!=nullptr;curr=curr->next){
		len++;
	}
	Node* curr=head;
	for(int i=1;i<len-n+1;i++){
		curr=curr->next;
	}
	return curr;
}

// Node* nthNodeFromEnd(Node* head, int n){
//     if(head==nullptr)return;
//     Node* first=head;
//     for(int i=0;i<n;i++){
//         if(first==nullptr)return ;
//         first=first->next;
//     }
//     Node* second=head;
//     while(first!=nullptr){
//         second=second->next;
//         first=first->next;
//     }
//     return second->data;
// }