//  Reverse vowels in a string
// Easy
// 0/40
// Average time to solve is 15m
// Contributed by
// Asked in companies
// Problem statement
// You are given a string 'S'. Your task is to reverse the vowels in the string while keeping the consonants unchanged.

// Note:

// The alphabets 'a', 'e', 'i', 'o', and 'u' are vowels, while all the remaining alphabets are consonants.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 1 <= |S| <= 10^5 

// All characters of string S are lowercase alphabets only.

// Where '|S|' denotes the length of string 'S'.

// Time limit: 1 sec
// Sample Input 1:
// 2
// abced
// pperu
// Sample Output 1:
// ebcad
// ppure
// Explanation for Sample Input 1:
// For the first test case, the vowels 'a' and 'e' are present in the string. The resulting string formed after reversing the vowels is "ebcad".

// For the second test case, the vowels 'e' and 'u' are present in the string. The resulting string formed after reversing the vowels is "ppure".
// Sample Input 2:
// 2
// ababa
// zyxw
// Sample Output 2:
// ababa
// zyxw


#include <bits/stdc++.h> 
string reverseVowels(string &s)
{
    // Write your code here.   
    int left=0;
    int right=s.length()-1;
    string vowels="aeiouAEIOU";
    while(left<right){
        while(left<right && vowels.find(s[left])==string::npos)left++;
        while(left<right && vowels.find(s[right])==string::npos)right--;
        swap(s[left],s[right]);
        left++;
        right--;
    }
    return s;
}