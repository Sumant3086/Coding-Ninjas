//  Count Palindrome Words In A String
// Easy
// 0/40
// Average time to solve is 15m
// Contributed by
// Asked in companies
// Problem statement
// You are given a string S of words. Your task is to find the number of palindrome words in the given string S. A word is called palindrome, if it reads the same backwards as forwards.

// Note:
// Words are separated by one or more whitespace characters.
// For Example:
// For the given string “Madam oyo cat”, “Madam”, and “oyo” are the palindrome words 
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10 
// 0 <= |S| <= 10^5 

// All the characters of the string S contain whitespace, lowercase, and uppercase English letters only.

// Time limit: 1 second
// Sample Input 1:
// 1
// Nitin and I are good friends
// Sample Output 1:
// 2
// Explanation For Sample Input 1:
// For the first test case, there are 2 palindrome words only i.e “Nitin” and “I”.
// Sample Input 2:
// 2
// Madam taught us the level order traversal of a binary tree yesterday
// We love coding ninjas
// Sample output 2:
// 3
// 0

#include <bits/stdc++.h> 
bool isPal(string &s,int low,int high){
	if(s.size()==0){
		return false;
	}
	if(low>high)return false;
	while(low<high){
		char l=s[low];
		char r=s[high];
		if(l>='A' && l<='Z')l+=32;
		if(r>='A' && r<='Z')r+=32;
		if(l!=r)return false;
		low++;
		high--;
	}
	return true;
	
}
int countNumberOfPalindromeWords(string s)
{
	//Your code goes here
	int count=0;
	int idx=0;
	int n=s.size();
	for(int i=0;i<n;i++){
		if(s[i]==' '){
			if(isPal(s,idx,i-1))count++;
			idx=i+1;
		}
	}
	if(isPal(s,idx,n-1))count++;
	return count;
}