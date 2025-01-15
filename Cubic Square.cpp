//  Cubic Square
// Moderate
// 0/80
// Average time to solve is 25m
// Contributed by
// Asked in company
// Problem statement
// You are given three positive integers ‘A’, ‘B’, and ‘M’. Your task is to find out the result of ‘A^B’ mod ‘M’.

// This task was too easy for Ninja, and being a top-class ninja, he likes to make things a little difficult in order to enjoy solving them. So he converted B into base 3 and is now trying to find the answer.

// But it seems like he made the task a little too difficult for himself. Being a good friend of Ninja, can you help find him ‘A^B mod M’ when ‘A’, ‘M’ is given in base 10 and ‘B’ is in base 3?

// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 1
// 2 11 6
// Sample Output 1 :
// 4
// Explanation for sample input 1 :
// ‘B’ is ‘10’ in base 3 which is equal to 4 in base 10. Hence the answer is 2^4 mod 6 which is equal to 4.
// Sample Input 2 :
// 2
// 5 201 7
// 6 120 9
// Sample Output 2 :
// 5
// 0
// Explanation for sample input 2 :
// For test case 1, ‘B’ equals 19 in base 10. 5^19 mod 7 = 5.

// For test case 1, ‘B’ equals 15 in base 10. 6^15 mod 9 = 0.

#include <bits/stdc++.h> 
int cubicSquare(int m, int a, string &b) {
    // Write your code here.
    int n=stoi(b,nullptr,3);
    int ans=1;
    int l=0,r=n-1;
    while(l<=r){
        ans=(ans*a)%m;
        if(l!=r){
        ans=(ans*a)%m;
        }
        l++;
        r--;
    }
    return ans;
}


// #include <bits/stdc++.h> 
// int cubicSquare(int m, int a, string &b) {
//     // Write your code here.
//     int n=stoi(b,nullptr,3);
//     int ans=1;
//     int l=0,r=n-1;
//     while(l<=r){
//         ans=(ans*a)%m;
//         if(l!=r)
//         ans=(ans*a)%m;
        
//         l++;
//         r--;
//     }
//     return ans;
// }
