// Rearrange Array
// Easy
// 0/40
// Average time to solve is 15m
// Asked in companies
// Problem statement
// You're given an array ARR[] of size N, where every element belongs to the range 0 to N-1. Your task is to rearrange the given array so that ARR[i] becomes ARR[ARR[i]] and make sure that this task is done with O(1) extra space.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 10^2
// 1 <= N <= 10^4
// 0 <= ARR[i] <= N-1

// Where 'ARR[i]' is 'ith' element of ARR.

// Time Limit : 1 sec
// Sample Input 1 :
// 1
// 4
// 0 1 2 3
// Sample Output 1:
// 0 1 2 3    
// Explanation of Sample Input 1 :
// We can see that ARR[ARR[0]] i.e ARR[0] is 0, hence ARR[0] in the output array will be 0. Also, ARR[ARR[1]] i.e ARR[1]  is1, hence ARR[1] in the output array will be 1. Similarly,  ARR[ARR[2]] i.e ARR[2] is 2, hence ARR[2] in the output array will be 2. Finally, ARR[ARR[3]] i.e ARR[3] is 3, hence ARR[3] in the output array will be 3.
// Sample Input 2 :
// 1
// 4
// 3 2 0 1
// Sample Output 2 :
// 1 0 3 2
// Explanation of Sample Input 2 :
// We can see that ARR[ARR[0]] i.e ARR[3] is 1, hence ARR[0] in the output array will be 1. Also, ARR[ARR[1]] i.e ARR[2] is 0, hence ARR[1] in the output array will be 0. Similarly,  ARR[ARR[2]] i.e ARR[0] is 3, hence ARR[2] in the output array will be 3. Finally, ARR[ARR[3]] i.e ARR[1] is 2, hence ARR[3] in the output array will be 2.
// C++ (g++ 11)
// 00
//  : 
// 03
//  : 
// 41
// 1234567891011121314
// 		v.push_back(i.second);
// 	}
// 	return v;
// }
// Last saved at 1:02 PM
// Sample test case
// Custom test case


// Your above test case has failed. Please fix and re-run your code to check remaining test cases.


#include <bits/stdc++.h> 
void rearrangeArray(int arr[], int n)
{
	// Write your code here 
	for(int i=0;i<n;i++){
		arr[i]=arr[i]+(arr[arr[i]]%n)*n;
	}
	for(int i=0;i<n;i++){
		arr[i]=arr[i]/n;
	}
}