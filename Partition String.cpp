//  Partition String
// Moderate
// 0/80
// Average time to solve is 25m
// Contributed by
// Asked in companies
// Problem statement
// Given a string S of lowercase English letters, your task is to partition the list in as many parts as possible such that each letter appears in at most one part, and return a list of integers representing the size of these parts.

// Note
// You don’t have to print anything, it has already been taken care of. Just implement the function. 
// The string will contain lowercase alphabets only. 
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 1 <=  N <= 5 * 10^4    
// Where ‘T’ is the total number of test cases and N represents the length of the string S. 
// Sample Input 1:
// 1 
// aaababcc
// Sample Output 1:
// 6 2
// Explanation of sample input 1:
// The partitions are "aaabab" , "cc". The partitions are such that 'a' and 'b' appear only in the first part and 'c' appears only in the second part.
// Sample Input 2:
// 2
// ababcbacadefegdehijhklij
// bbbbbb
// Sample Output 2:
// 9 7 8
// 6
// Explanation of sample input 2:
// Test Case 1: 
// The partitions are "ababcbaca" , "defegde" , 
// "hijhklij".    

// Test Case 2: 
// The partition is "bbbbbb". 

#include <bits/stdc++.h> 
vector<int> partitionString(string S){
	
	// Write your code here
	int n=S.length();
	vector<int>last(26,-1);
	for(int i=0;i<n;i++){
		int idx=S[i]-'a';
		last[idx]=max(last[idx],i);
	}
	vector<int>ans;
	int move=-1;
	int count=0;
	for(int i=0;i<n;i++){
		count++;
		move=max(move,last[(S[i]-'a')]);
		if(move==i){
			ans.push_back(count);
			count=0;
		}
	}
	return ans;
}
