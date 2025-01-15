

// Cyclically Rotate An Array By One
// Easy
// 40/40
// Average time to solve is 10m
// Asked in companies
// Problem statement
// You are given an integer array of size N. Your task is to rotate the array by one position in the clockwise direction.

// For example :
// If N = 5 and arr[ ] = {1, 2, 3, 4, 5} then output will be 5 1 2 3 4.

// If N = 8 and arr[ ] = {9, 8, 7, 6, 4, 2, 1, 3} then output will be 3 9 8 7 6 4 2 1.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 5
// 1 <= N <= 1000
// -10^9 <= arr[i] <=10^9
// Sample Input 1 :
// 1
// 5
// 1 2 3 4 5
// Sample Output 1 :
// 5 1 2 3 4
// Explanation For Sample Input 1 :
// The first four elements are shifted towards the right by one position, and the last element i.e. 5 is shifted to the first position.
// Sample Input 2 :
// 1
// 8
// 9 8 7 6 4 2 1 3
// Sample Output 2 :
// 3 9 8 7 6 4 2 1
// C++ (g++ 5.4)
// 02
//  : 
// 54
//  : 
// 32
// 12345678910
// #include <bits/stdc++.h> 
// void rotate(vector<int>& arr, int n) {
//     // Write your code here
//     if(n<=1)return;
//     int r=arr[n-1];
//     for(int i=n-1;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=r;
// }
// Last saved at 9:55 PM


#include <bits/stdc++.h> 
void rotate(vector<int>& arr, int n) {
    // Write your code here
    if(n<=1)return;
    int r=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=r;
}