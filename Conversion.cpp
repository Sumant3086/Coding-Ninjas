//  Conversion
// Easy
// 40/40
// Average time to solve is 20m
// Contributed by
// Asked in companies
// Problem statement
// You are given two integers, ‘N’ and ‘M’. You are supposed to perform the following operation to convert ‘N’ to ‘M’.

// In one operation, you can:

// 1. Choose any bit in ‘N’.

// 2. Flip the chosen bit, i.e., if the bit is ‘0’, make it ‘1’ and vice versa.

// You are supposed to find the minimum number of operations needed to convert ‘N’ to ‘M’.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1<= T <= 10^4
// 0 <= N, M <= 10^9

// Where ’T’ is the number of test cases and ‘N’,’M’ are the given integers.

// Time Limit: 1 sec
// Sample Input 1:
// 2
// 15 2
// 30 0
// Sample Output 1:
// 3
// 4
// Explanation for Sample Input 1:
// In the first test case, the binary representation of ‘15’ is 1111, and the binary representation of ‘2’ is 0010, ie.
// 1111
// 0010
// We can flip the third, first, and a fourth bit of 2 to convert 2 to 15. Hence, the answer is 3.

// In the second test case, the binary representation of ‘30’ is 11110, and the binary representation of ‘0’ is 00000, ie.
// 11110
// 00000
// We can flip the fourth, third, second, fifth bit of 0 to convert 0 to 30.
// Sample Input 2:
// 2   
// 10 1
// 4 2
// Sample Output 2:
// 3
// 2
// C++ (g++ 11)
// 12345678
// #include <bits/stdc++.h> 
// int conversion(int N, int M)
// {
//     // Write your code here.
//     int XOR=N^M;
//     return __builtin_popcount(XOR);
// }



#include <bits/stdc++.h> 
int conversion(int N, int M)
{
    // Write your code here.
    int XOR=N^M;
    return __builtin_popcount(XOR);
}
