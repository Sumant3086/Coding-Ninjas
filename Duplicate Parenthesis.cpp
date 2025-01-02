//  Duplicate Parenthesis
// Moderate
// 0/80
// Average time to solve is 25m
// Contributed by
// 24 upvotes
// Asked in companies
// Problem statement
// You are given the expression ‘expr’ with parenthesis. Your task is to find if the given expression contains duplicate parenthesis. A set of parenthesis is duplicate if multiple parenthesis surrounds the same subexpression.

// For Example:
// You are given ‘expr’ = “(a+b)+((c+d))”, here the subexpression “c+d” is surrounded by two parentheses. Hence the expression contains duplicate parenthesis. Hence the answer is “YES”.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 1 <= |expr| <= 10^6

// Time Limit: 1 sec
// Note:
// You do not need to print anything. It has already been taken care of. Just implement the function.
// Sample Input 1:
// 2
// (a+b)+((c+d))
// ((a+b) + c)
// Sample Output 1:
// YES
// NO
// Explanation:
// For the first test case,  ‘expr’ = “(a+b)+((c+d))”, here, the subexpression “c+d” is surrounded by two parentheses. Hence the expression contains duplicate parenthesis. Hence the answer is “YES”.

// For the second test case, ‘expr’ = “((a+b) + c)”, here, no subexpression is surrounded by multiple parentheses. Hence the answer is “NO”.
// Sample Input 2:
// 2
// (a+b)+((c+d))
// ((a+b)+(c+d))
// Sample Output 2:
// YES
// NO

 
#include <bits/stdc++.h>  

bool duplicateParanthesis(string &expr) {
    stack<char> st;
    for(char c:expr) {
        if(c==')'){
            char top=st.top();
            st.pop();
            int elementsInside=0;
            while(top!='('){
                elementsInside++;
                top=st.top();
                st.pop();
            }             
             if(elementsInside==0){
                 return true;
             }
        }else{
            st.push(c);
        }
    }
    return false;
}
