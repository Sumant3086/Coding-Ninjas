//  Reverse Linked List
// Easy
// 40/40
// Average time to solve is 15m
// Contributed by
// 169 upvotes
// Asked in companies
// Problem statement
// You are given a Singly Linked List of integers. You need to reverse the Linked List by changing the links between nodes.



// Example:

// Input:
// 2 4 5 -1

// Output:
// 5 4 2 -1

// Explanation: 2->4->5 is the initial linked list. If we reverse this, we get 5->4->2.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 1 2 4 -1
// Sample Output 1 :
// 4 2 1 -1
// Explanation for Sample Input 1 :
// 1->2->4 is the initial linked list. If we reverse this, we get 4->2->1.
// Sample Input 2 :
// 1
// 1 1 1 -1
// Sample Output 2 :
// 1 1 1 -1
// Constraints :
// 1 <= 'N' <= 10^4
// 0 <= 'data' <= 10^9

// Where 'N' is the number of nodes in the linked list.

// Time Limit: 1 sec

/****************************************************************

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
        

*****************************************************************/

Node* reverseLinkedList(Node *head)
{
    // Write your code here
    Node* temp=head;
    Node* prev=nullptr;
    while(temp){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}
