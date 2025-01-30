//  Maximum 1s
// Easy
// 0/40
// Average time to solve is 10m
// Contributed by
// Asked in companies
// Problem statement
// You are given a matrix ‘ARR’ with dimensions ‘N’ * ‘M’ and containing only 0s and 1s where each row is sorted.

// Your task is to find the index of the row with a maximum number of 1s in it. Rows and columns are 0-indexed based.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 1000
// 1 <= N, M <= 500


// Time Limit: 1 sec
// Sample Input 1:
// 2
// 1 1
// 1
// 3 3
// 0 0 1
// 1 1 1
// 0 1 1
// Sample Output 1:
// 0
// 1
// Explanation for sample input 1:
// For the first test case, 
// Since the matrix has one row and one column. The only row, i.e., the 0th row, contains a 1. So the output is 0. 

// For the second test case, 
// Since the matrix has three rows and three columns. The number of ones in the 0th row is 1. The number of ones in the 1st row is 3, and the number of ones in the 2nd row is 2. So the output is 1.
// Sample Input 2:
// 2
// 3 2
// 0 1
// 0 1
// 0 0
// 4 4
// 0 0 1 1
// 0 0 0 0
// 1 1 1 1 
// 0 0 1 1 
// Sample Output 2:
// 0
// 2
// Explanation for sample input 2:
// For the first test case, 
// Since the matrix has 3 rows and 2 columns. The number of ones in the 0th row is 1. The number of ones in the 1st row is 1, and the number of ones in the 2nd row is 0. So the output is 0.

// For the second test case, 
// Since the matrix has 4 rows and 4 columns. The number of ones in the 0th row is 2. The number of ones in the 1st row is 0. The number of ones in the 2nd row is 4 and the number of ones in the 3rd row is 2. So the output is 2.
// C++ (g++ 5.4)
// 00
//  : 
// 37
//  : 
// 11
// 12345678910111213141516
// #include <bits/stdc++.h> 
// int maxOne(vector<vector<int>> &arr)
// {
// 	// Write your code here
// 	int n=arr.size();
// 	int m=arr[0].size();
// 	for(int i=0;i<m;i++){
// 		for(int j=0;j<n;j++){
// 			if(arr[j][i]==1){
// 				return j;

// Last saved at 7:39 AM
// Sample test case
// Custom test case




#include <bits/stdc++.h> 
int maxOne(vector<vector<int>> &arr)
{
	// Write your code here
	int n=arr.size();
	int m=arr[0].size();
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(arr[j][i]==1){
				return j;
				break;
			}
		}
	}
}
