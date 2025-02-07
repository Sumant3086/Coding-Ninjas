//  Balanced parentheses
// Moderate
// 80/80
// Average time to solve is 10m
// Contributed by
// Asked in companies
// Problem statement
// Given an integer ‘N’ representing the number of pairs of parentheses, Find all the possible combinations of balanced parentheses with the given number of pairs of parentheses.

// Note :

// Conditions for valid parentheses:
// 1. All open brackets must be closed by the closing brackets.

// 2. Open brackets must be closed in the correct order.
// For Example :

// ()()()() is a valid parentheses.
// )()()( is not a valid parentheses.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 5
// 1 <= N <= 10
// Time Limit : 1 sec.
// Sample Input 1 :
// 2
// 2
// 3
// Sample Output 1 :
// (()) 
// ()()
// ((())) 
// (()()) 
// (())()
// ()(())
// ()()()
// Explanation for Sample Input 1 :
// Test Case 1: 

// For 2 pair of parentheses the combinations of balanced parentheses will be (()) ()()

// Test Case 2:

// For 3 pair of parentheses the combinations of balanced parentheses will be 
// ((())) (()()) (())() ()(()) ()()()
// Sample Input 2 :
// 2
// 1
// 4
// Sample Output 2 :
// ()
// (((()))) 
// ((()())) 
// ((())()) 
// ((()))() 
// (()(())) 
// (()()()) 
// (()())() 
// (())(()) 
// (())()() 
// ()((())) 
// ()(()()) 
// ()(())() 
// ()()(()) 
// ()()()()


#include <bits/stdc++.h> 
void generate(int open,int close,string curr,vector<string>& res){
    if(open==0 && close==0){
        res.push_back(curr);
        return;
    }
    if(open>0)generate(open-1,close,curr+'(',res);
    if(close>open)generate(open,close-1,curr+')',res);
}
vector<string> balancedParantheses(int n)
{
    // Write Your Code here.
    vector<string>res;
    generate(n,n,"",res);
    return res;
}

