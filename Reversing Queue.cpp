//  Reversing Queue
// Easy
// 0/40
// Average time to solve is 15m
// Contributed by
// 16 upvotes
// Asked in companies
// Problem statement
// You have been given a queue of ‘N’ distinct integers. For a given queue, you need to reverse all the elements in it.

// Note:
// You need to reverse the string in O(N) time complexity.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 50
// 1 <= N <= 10^4
// 0 <= Q[i] <= 10^5

// Where Q[i] denotes the value ith element of the input queue.

// Time Limit: 1 sec
// Sample Input 1:
// 2
// 3
// 2 3 1
// 5
// 6 8 9 2 3   
// Sample Output 1:
// 1 3 2
// 3 2 9 8 6
// Explanation For Sample Input 1:
// In the first test case, after reversing the queue, the resultant elements of the reversed queue will be 1 3 2.

// In the second test case, after reversing the queue, the resultant elements of the reversed queue will be 3 2 9 8 6.
// Sample Input 2:
// 2
// 7
// 6 8 9 11 15 2 3
// 4
// 1 2 3 4
// Sample Output 2:
// 3 2 15 11 9 8 6
// 4 3 2 1
// Explanation For Sample Input 2:
// In the first test case, after reversing the queue, the resultant elements of the reversed queue will be 3 2 15 11 9 8 6.

// In the second test case, after reversing the queue, the resultant elements of the reversed queue will be 4 3 2 1.


#include <bits/stdc++.h> 
void reverse(queue < int > & q) {
     
    {
        // add code here.
        stack<int>st;
       while(!q.empty()){
           int element=q.front();
           q.pop();
           st.push(element);
       }
       while(!st.empty()){
           int ele=st.top();
           st.pop();
           q.push(ele);
       }
       
    }
    
}