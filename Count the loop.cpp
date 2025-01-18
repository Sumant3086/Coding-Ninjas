//  Count the loop
// Moderate
// 0/80
// Average time to solve is 40m
// Contributed by
// Asked in company
// Problem statement
// Alice and Bob recently studied bitwise operators and were extremely fascinated by them. Alice found the following function in a book :

// Function magic(P, Q):

// while Q > 0 :

// A = P AND Q

// B = P XOR Q

// Q = A * 2

// P = B

// return P

// Alice wondered how many times the while loop would run for any value of ‘P’ and ‘Q’. Alice gave Bob the binary representation of ‘P’ and ‘Q’ and asked him to help her count this.

// Help Bob count the number of times the while loop would run for the given value of ‘P’ and ‘Q’.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 1 <= |P|, |Q| <= 10^5
// Sum of all |P| + |Q| overall test cases will not exceed 10^6. 

// Time Limit: 1 sec
// Sample Input 1:
// 2 
// 110
// 10
// 1
// 1
// Sample Output 1:
// 3
// 2
// Explanation for Sample Input 1:
// In the first test case, initially ‘P’ is 6 and ‘Q’ is 2. After the first iteration, ‘P’ becomes 4 and ‘Q’ becomes 4. After the second iteration, ‘P’ becomes 0 and ‘Q’ becomes 8. After the third iteration, ‘P’ becomes 8 and ‘Q’ becomes 0.
// In the second test case, initially ‘P’ is 1 and ‘Q’ is 1. After the first iteration, ‘P’ becomes 0 and ‘Q’ becomes 2. After the second iteration ‘P’ becomes 2 and ‘Q’ becomes 0.
// Sample Input 2:
// 2
// 1101
// 101
// 111
// 11101
// Sample Output 2:
// 3
// 4
// C++ (g++ 5.4)
// 00
//  : 
// 03
//  : 
// 39
// 12345678910111213141516171819202122232425262728293031
// #include <bits/stdc++.h> 
// int countLoop(string p, string q)
// {
//     // Write your code here.
//     if(q[0]=='0'){
//         return 0;
//     }   
//     reverse(p.begin(),p.end());
//     reverse(q.begin(),q.end());
//     while(p.size()<q.size())p+="0";

// Sample test case
// Custom test case


#include <bits/stdc++.h> 
int countLoop(string p, string q)
{
    // Write your code here.
    if(q[0]=='0'){
        return 0;
    }   
    reverse(p.begin(),p.end());
    reverse(q.begin(),q.end());
    while(p.size()<q.size())p+="0";
    while(q.size()<p.size())q+="0";
    int carry=0,ans=0,curr=0;
    for(int i=0;i<(int)p.size();i++){
        carry=carry+(p[i]-'0')+(q[i]-'0');
        if(carry==2){
            curr+=1;
        }else{
            if(carry<=1){
                curr=0;
            }else{
                curr=1;
            }
        }
        if(carry<=1){
            carry=0;
        }else{
            carry=1;
        }
        ans=max(ans,curr+1);
    }
    return ans;
}