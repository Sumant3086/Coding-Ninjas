// Convert to Hexadecimal
// Easy
// 0/40
// Average time to solve is 15m
// Asked in companies
// Problem statement
// You are given an integer N. Your task is to convert the number to its equivalent Hexadecimal.

// Note - All letters in Hexadecimal (A-F) must be in uppercase.

// For example:

// If N = 50, then output will be 32.
// If N = -50, then output will be FFFFFFCE.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 5
// -10^4 <= N <= 10^4

// Time Limit: 1 sec
// Sample Input 1:
// 3
// 14
// 100
// -20
// Sample Output 1:
// E
// 64
// FFFFFFEC
// Sample Input 2:
// 3
// 45
// 64
// -1
// Sample Output 2:
// 2D
// 40
// FFFFFFFF

#include <bits/stdc++.h> 
string toHex(int num) {
	// Write your code here.
	if(num==0)return "0";
	unsigned int n=num;
	string hex="";
	string mp="0123456789ABCDEF";
	while(n>0){
		int remainder=n%16;
		hex=mp[remainder]+hex;
		n/=16;
	}
	return hex;
}
