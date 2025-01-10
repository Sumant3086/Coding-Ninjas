//  Calculate square of a number
// Easy
// 0/40
// Average time to solve is 15m
// Contributed by
// Asked in company
// Problem statement
// Given an integer ‘N’, you are supposed to return the square of the given integer without using multiplication (*), division (/) or power function (pow()).

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 50
// -10000 <= N <= 10000

// Time Limit: 1 sec.
// Sample Input 1:
// 2
// 3
// -4
// Sample Output 1:
// 9
// 16
// Explanation to Sample Input 1:
// In the first test case, the square of 3 is 9.

// In the second test case, the square of -4 is 16. 
// Sample Input 2:
// 2
// -13
// 1
// Sample Output 2:
// 169
// 1
// C++ (g++ 11)
// 12345678910111213
// #include <bits/stdc++.h> 
// int calculateSquare(int num)
// {
//     //    Write your code here.
//     int sq=0;
//     if(num<0){
//         num=-num;
//     }
//     for(int i=1;i<=(2*num-1);i+=2){
//         sq+=i;

// Last saved at 10:26 PM
// Sample test case
// Custom test case




#include <bits/stdc++.h> 
int calculateSquare(int num)
{
    //    Write your code here.
    int sq=0;
    if(num<0){
        num=-num;
    }
    for(int i=1;i<=(2*num-1);i+=2){
        sq+=i;
    }
    return sq;
}