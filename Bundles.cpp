//  Bundles
// Easy
// 0/40
// Average time to solve is 15m
// Contributed by
// Asked in companies
// Problem statement
// You are given integers ‘N’ and ‘K’, and a list 'STRLIST' of ‘N’ strings. You are supposed to divide the string into exactly ‘N/K’(N will be divisible by K) groups and each group must consist of exactly ‘K’ strings. Each string must belong to exactly one group. The score of each group is equal to the length of the longest prefix that is common to all strings of that group.

// You are supposed to find the maximum sum of scores of the groups.

// Example :
// { “abcdty”, “abcdqwse”, “abcfhjgt”, “abcdtt” } 
// The score for this group of strings is 3, as all strings have the longest common prefix as “abc”.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 5
// 1 <= K <= N <= 100
// 1 <= |STRLIST[i]| <= 1000
// “STRLIST[i]” contains only lowercase english letters.

// Where ‘T’ denotes the number of test cases, ‘N’ denotes the number of strings, ‘K’ denotes the size of each group of the strings, and |STRLIST[i]| denotes the length of the i’th string.

// Time Limit: 1 sec
// Sample Input 1 :
// 2
// 2 2
// hello
// world
// 4 2
// aboard
// tail
// above
// tower
// Sample Output 1 :
// 0
// 4
// Explanation of Sample Input 1 :
// In the first test case, both the strings will be in 1 group and they don’t have any common prefix hence the answer is 0.

// In the second test case, we can form the groups as { “above, “aboard” } and {“tail”, “tower”} , then the first group has a score of 3 and the second group has a score of 1. Hence the total score is 3+1=4.
// Sample Input 2 :
// 2
// 6 3
// amazing
// give
// amagniz
// am
// help
// code
// 4 2
// hello
// help
// home
// ninja
// Sample Output 2 :
// 2
// 3
// Explanation of Sample Input 2 :
// In the first test case, it is optimal to choose one group as { “am”, “amazing”, “amginza” } and the second group as { “help”, “code”, “give” }. The first group has a score of 2 while the second group has a score of 0. Hence, the total score is 2.

// In the second test case, we can form the groups as { “hello, “help” } and {“home”, “ninja”}, then the first group has a score of 3 and the second group has a score of 0. Hence the total score is 3.


#include <bits/stdc++.h> 
int groupsOfK(vector<string> &strList, int k)
{
    // Write your code here.
    unordered_map<string,int>prefC;
    int n=strList.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<strList[i].size();j++){
            string pref=strList[i].substr(0,j+1);
            prefC[pref]++;
        }
    }
    int score=0;
    for(auto &i:prefC){
        int count=i.second;
        score+=(count/k);
    }
    return score;
}