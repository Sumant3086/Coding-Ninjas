//  Collect balls
// Moderate
// 0/80
// Average time to solve is 15m
// Contributed by
// Asked in companies
// Problem statement
// You have a machine that throws ping-pong balls and has a counter meter installed in it. Each time when the button is pressed to throw the balls, the machine throws the number of balls equal to the integer saved in its counter meter.

// E.g., Let the counter be set to 5; when the throw button is pressed, the machine will throw 5 ping-pong balls and turn itself off. To throw more balls, you need to press that button again with/without resetting the counter.

// You have a box in front of you and want to collect 'N' balls in it. To achieve this, you are going to perform some operations, where each operation can be one of the following types:

// 1. Reset the counter with the number of balls present in the box.
// 2. Press the throw button.
// If initially the counter is set to 0 and the number of balls in the box is 1, find the minimum number of operations needed to collect exactly 'N' balls (first ball inclusive), assuming that all balls thrown by the machine are collected in the box.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints -
// 1 <= 'T' <= 10^3
// 1 <= 'N' <= 10^6

// Time Limit: 1 sec
// Sample Input 1:
// 2
// 3
// 6
// Sample Output 1:
// 3
// 5
// Explanation for Sample Input 1:
// For case 1:
// Initially, the box contains 1 ball. First operation is resetting the counter from 0 to 1 and for next two consecutive operations, throw 1 ball in each operation. After a total of three operations, the box contains 3 balls.

// For Case 2:
// First operation is resetting the counter from 0 to 1. Second operation is throwing 1 ball. Third operation is resetting the counter to 2 and for next two consecutive operations, throw 2 balls in each operation. After a total of five operations, the box contains 6 balls.
// There exists another order for operations as well, but the number of operations cannot be less than 5. 
// Sample Input 2:
// 3
// 1
// 10
// 9
// Sample Output 2:
// 0
// 7
// 6


#include <bits/stdc++.h> 
int collectBalls(int N)
{
    // Write your code here.
    int ans=0;
    for(int i=2;i*i<=N;i++){
        while(N%i==0){
            N/=i;
            ans+=i;
        }
    }
    if(N>1){
        ans+=N;
    }
    return ans;
}