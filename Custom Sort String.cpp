// Custom Sort String
// Easy
// 0/40
// Average time to solve is 10m
// Asked in companies
// Problem statement
// You are provided with the two strings named X and Y respectively. Y has its own specific order and has no repeating characters. Your task is to arrange the characters of the first string i.e. X in such a way that the order of characters in X is exactly the same as in Y, which means if ‘d’ occurs after ‘c’ in Y then it should also occur after ‘c’ in X ( obviously if X has ‘d’ and ‘c’ as characters in it ). All you have to do is, convert string X in the specific order with respect to string Y.

// Note :

// Both the strings have only lowercase English alphabets. 
// There may be more than one correct solution, you have to return any one of the possible solutions.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 10
// 1 <= |X| <= 10000
// 1 <= |Y| <= 26
// where ‘T’ is the number of test cases, |X| is the length of the first string and |Y| is the length of the second string.
// Time Limit: 1 sec
// Sample Input 1:
// 1
// acabd
// abc
// Sample Output 1:
// aabcd
// Explanation of Sample Input 1:
// String Y has ‘a’ first then ‘b’ and then ‘c’ and therefore string X must be ordered as ‘aabcd’ to keep the respective order of characters same as in string Y.
// Other possible answers are: ‘daabc’ , ‘adabc’ , ‘aadbc’, ‘aabdc’.
// Sample Input 2:
// 4
// dfhfgk
// h
// aabbb
// gd
// abababab
// ab
// cag
// abcdef
// Sample Output 2:
// hdffgk
// aabbb
// aaaabbbb
// acg

#include <bits/stdc++.h> 
string specificOrder(string & x, string & y) {
    // Write your code here.
    unordered_map<char,int>mp;
    for(char c:x)mp[c]++;
    string res="";
    for(char c:y){
        if(mp.count(c)){
            res.append(mp[c],c);
            mp.erase(c);
        }
    }
    for(auto& [ch,count]:mp){
        res.append(count,ch);
    }
    return res;
}