// Convert String
// Easy
// 0/40
// Average time to solve is 15m
// Contributed by
// Asked in companies
// Problem statement
// You are given a string 'STR'. You have to convert the first alphabet of each word in a string to UPPER CASE.

// For example:

// If the given string 'STR' = ”I am a student of the third year” so you have to transform this string to ”I Am A Student Of The Third Year"
// Note:

// 'STR' will contains only space and alphabets both uppercase and lowercase. The words will be separated by space.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= 'T' <= 10
// 1 <= |STR| <= 10^5

// Where |STR| denotes the length of the string.

// Time Limit: 1 sec
// Sample Input 1 :
// 3
// I love programming
// they are playing cricket
// good to see you
// Sample Output 1 :
// I Love Programming
// They Are Playing Cricket
// Good To See You
// Explanation of The Sample Input 1:
// For the first test case:
// Given string is “I love programming” we will convert every letter after space to uppercase to give the output as ”I Love Programming”.

// For the second test case:
// Given string is “they are playing cricket” we will convert every letter after space to uppercase to give the output as  “They Are Playing Cricket”. 

// For the third test case:
// Given string is “good to see you” we will convert every letter after space to uppercase to give the output as “Good To See You”. 
// Sample Input 2 :
// 3
// why you are confused
// Its a good day to be here
// go and do your work
// Sample Output 2 :
//  Why You Are Confused
//  Its A Good Day to Be Here
//  Go And Do Your Work


#include <bits/stdc++.h> 
string convertString(string str) 
{
	// WRITE YOUR CODE HERE
	bool capt=true;
	for(char &ch:str){
		if(capt && isalpha(ch))ch=toupper(ch);
		capt=(ch==' ');
	}
	return str;
}