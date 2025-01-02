//  Middle Of Linked List
// Easy
// 40/40
// Average time to solve is 20m
// Contributed by
// 273 upvotes
// Asked in companies
// Problem statement
// Given a singly linked list of 'N' nodes. The objective is to determine the middle node of a singly linked list. However, if the list has an even number of nodes, we return the second middle node.

// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 5
// 1 2 3 4 5
// Sample Output 1 :
// 3 4 5
// Explanation Of Sample Input 1 :

// We can clearly see that there are 5 elements in the linked list therefore the middle node is the node with value '3'.
// Sample Input 2 :
// 6
// 1 2 3 4 5 6
// Sample Output 2 :
// 4 5 6
// Explanation Of Sample Input 2 :

// We can clearly see that there are 6 elements in the linked list and the middle nodes are  nodes with values 3 and 4 hence we return a second middle node having value '4'.
// Constraints :
// 1 <= 'N' <= 10^4
// 0 <= 'data' <= 10^3 

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

Node *findMiddle(Node *head) {
    // Write your code here
    Node* slow=head;
    Node* fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

