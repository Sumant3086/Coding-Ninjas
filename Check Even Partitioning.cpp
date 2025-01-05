//  Check Even Partitioning
// Easy
// 40/40
// Average time to solve is 15m
// Contributed by
// Asked in company
// Problem statement
// You are given a positive integer ‘N’. You have to check whether ‘N’ can be represented as a sum of two even numbers or not.

// For example:
// If the given number is 6, The number 6 can be represented as 2 + 4, and both 2 and 4 are even numbers. Hence the answer is “YES”.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 1 <= N <= 10^9

// Time limit: 1 sec
// Sample Input 1:
// 2
// 16
// 11
// Sample Output 1:
// YES
// NO
// Explanation of sample input 1:
// For the first test case, 
// The number 16 can be represented as 10 + 6, and both 10 and 6 are even numbers. Hence the answer is “YES”.

// For the second test case,
// The number 11 cannot be represented as a sum of two even numbers. Hence the answer is “NO”.
// Sample Input 2:
// 2
// 44
// 2
// Sample Output 2:
// YES
// NO


#include <bits/stdc++.h> 
bool checkEvenPartitioning(int n) 
{
    // Write your code here
    if(n%2==1 || n==2){
        return false;
    }
    return true;
}

