//  Dominant Number
// Moderate
// 0/80
// Average time to solve is 15m
// Asked in company
// Problem statement
// You are given an array of integers 'ARR' of size N. Your task is to find the dominant number in the array.

// A dominant number in an array is an integer that occurs more than N/3 times in the array, where N is the array’s length.

// Note:

// 1. There will be only one such element (if it exists).
// 2. If there is no such element in the array, return -1.
// For Example:
// If the given array ARR = {3,3,3,1,5,6,3} we can see that here 3 occurs 4 times in the array, which is greater than 7/3(N/3), so the dominant number here is 3.
// Note:

// Try to solve the problem in linear time complexity
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 100
// 1 <= N<= 10^4
// 0 ≤ ARR[I] ≤ 10^5

// Time Limit: 1 sec
// Sample Input 1 :
// 3
// 6
// 3 1 1 8 1 2
// 3
// 1 2 4
// 4
// 3 2 1 3
// Sample Output 1 :
// 1
// -1
// 3
// Explanation of The Sample Input 1:
// For the first test case:
// The given array is {3,1,1,8,1,2} we can see that 3 occurred three times in the array, which is greater than 6/3, so the dominant number will be 3. 

// For the second test case:
// The given array is {1,2,4} we can see that no number here is repeated more than once, so the answer here will be -1.

// For the third test case
// The given array is {3,2,1,3} we can see that  3 occurred two times in the array, which is greater than 4/3, so the dominant number will be 3. 
// Sample Input 2 :
// 3
// 4
// 4 4 4 1
// 7
// 5 6 6 4 3 2 6
// 8
// 1 9 8 4 5 5 5 5
// Sample Output 2 :
// 4
// 6
// 5


#include <bits/stdc++.h> 
int dominantNumber(int* arr, int n) 
{
	// Write your code here.
	int d=n/3;
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	for(auto i:mp){
		if(i.second>d){
			return i.first;
		}
	}
	return -1;
	
}
