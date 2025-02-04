//  Subarray with distinct integers
// Easy
// 0/40
// Average time to solve is 10m
// Contributed by
// Asked in companies
// Problem statement
// You are given an array/list 'ARR' consisting of 'N' integers and an integer 'B'. A non-empty subarray of 'ARR' is good if it contains exactly 'B' distinct integers.

// Your task is to return the number of good subarrays in the given array/list.

// Example:

// For 'ARR' = [1, 2, 1, 3, 2, 4] and 'B' = 3, one of the good subarrays which contains three distinct integers is [1, 2, 1, 3]. 
// Note:

// An array 'C' is a subarray of array 'D' if it can be obtained by deletion of several elements(possibly zero) from the beginning and the end from array 'D'.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 100
// 1 <= N <= 5000
// 1 <= B <= N
// 1 <= ARR[i] <= 10^9

// Time Limit: 1sec
// Sample Input 1 :
// 2
// 5 2 
// 1 2 1 2 3
// 5 3
// 1 2 1 3 4
// Sample Output 1:
// 7
// 3
// Explanation for Sample 1:
// All good subarrays in test case 1 are [1, 2], [2, 1], [1, 2], [2, 3], [1, 2, 1], [2, 1, 2], [1, 2, 1, 2].

// All good subarrays in test case 2 are [1, 2, 1, 3], [2, 1, 3], [1, 3, 4]. So the total good subarray are 3.
// Sample Input 2 :
// 1
// 5 5
// 1 2 1 3 4
// Sample Output 2 :
// 0
#include <bits/stdc++.h> 
int helper(vector<int>& arr,int n,int k){
	int l=0;
	int res=0; 
	unordered_map<int,int>freq;
	for(int r=0;r<n;r++){
		freq[arr[r]]++;  
		while(freq.size()>k){
			freq[arr[l]]--;
			if(freq[arr[l]]==0){
				freq.erase(arr[l]);
			}
			l++;
		}
		res+=(r-l+1); 
	}
	return res;

}
int goodSubarrays(vector<int>& arr, int n, int k)
{
	// Write your code here.
	return helper(arr,n,k)-helper(arr,n,k-1); 	
}
