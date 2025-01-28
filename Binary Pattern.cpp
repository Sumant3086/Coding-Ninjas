// Binary Pattern
// Easy
// 0/40
// Average time to solve is 10m
// Contributed by
// Asked in companies
// Problem statement
// You have been given an input integer 'N'. Your task is to print the following binary pattern for it.

// Example

// Pattern for 'N' = 4

// 1111
// 000
// 11
// 0
// The first line contains 'N' 1s. The next line contains 'N' - 1 0s. Then the next line contains 'N' - 2 1s and so on.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 10
// 1 <= N <= 10^3

// Time Limit: 1 sec
// Sample Input 1:
// 2
// 1
// 2
// Sample Output 1:
// 1
// 11
// 0
// Sample Input 2:
// 2
// 3
// 5
// Sample Output 2:
// 111
// 00
// 1
// 11111
// 0000
// 111
// 00
// 1


#include <bits/stdc++.h> 
void printPatt(int n) {
  // Write your code here.
  char ch='1';
  for(int i=n;i>=1;i++){
    string s=string(i,ch);
    cout<<s<<endl;
    if(ch=='1')ch='0';
    else ch='1';
  }
}