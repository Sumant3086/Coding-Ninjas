//  Reverse Linked List
// Moderate
// 80/80
// Average time to solve is 15m
// Contributed by
// 477 upvotes
// Asked in companies
// Problem statement
// Given a singly linked list of integers. Your task is to return the head of the reversed linked list.

// For example:
// The given linked list is 1 -> 2 -> 3 -> 4-> NULL. Then the reverse linked list is 4 -> 3 -> 2 -> 1 -> NULL and the head of the reversed linked list will be 4.
// Follow Up :
// Can you solve this problem in O(N) time and O(1) space complexity?
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 5
// 0 <= L <= 10^5
// 1 <= data <= 10^9 and data != -1

// Time Limit: 1 sec
// Sample Input 1 :
// 1
// 1 2 3 4 5 6 -1
// Sample Output 1 :
// 6 5 4 3 2 1 -1
// Explanation For Sample Input 1 :
// For the first test case,  After changing the next pointer of each node to the previous node, The given linked list is reversed.
// Sample Input 2 :
// 1
// 10 21 3 2 4 -1
// Sample Output 2 :
// 4 2 3 21 10 -1

#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *next,* prev=nullptr;
    while(head!=nullptr){
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}