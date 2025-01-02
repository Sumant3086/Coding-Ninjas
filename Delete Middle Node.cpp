//  Delete Middle Node
// Easy
// 40/40
// Average time to solve is 15m
// Contributed by
// 65 upvotes
// Asked in companies
// Problem statement
// Given a singly linked list of 'N' nodes. Your task is to delete the middle node of this list and return the head of the modified list.



// However, if the list has an even number of nodes, we delete the second middle node



// Example:
// If given linked list is 1->2->3->4 then it should be modified to 1->2->4.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 5
// 1 2 3 4 5
// Sample Output 1 :
// 1 2 4 5 
// Explanation to Sample Input 1 :
// We can clearly see that there are 5 nodes in the linked list therefore the middle node is the node with value '3'.
// Sample Input 2 :
// 1
// 2
// Sample Output 2 :
// -1
// Explanation to Sample Input 1 :
// We can clearly see that there is only one node in the linked list.
// Therefore, after deleting that one node, the linked list becomes empty, resulting in an output of -1.
// Constraints :
// 1 <= N <= 10^3
// 0 <= data <= 10^3 

// Where 'N' is the length of the linked list.

// Time Limit: 1 sec


/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* deleteMiddle(Node* head){
    // Write your code here.
      if(!head || !head->next)return nullptr;
	Node* slow=head;
	Node* fast=head;
	Node* prev=nullptr;
// 	Node* prev=nullptr;
	while(fast!=nullptr && fast->next!=nullptr){
	    prev=slow;
	    slow=slow->next;
	    fast=fast->next->next;
	}
	 
	prev->next=slow->next;
// 	delete slow;
	 
	return head;
}
