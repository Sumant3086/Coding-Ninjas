// Armstrong Number
// Easy
// 0/40
// Average time to solve is 15m
// Contributed by
// 63 upvotes
// Asked in companies
// Problem statement
// You are given an integer ‘NUM’ . Your task is to find out whether this number is an Armstrong number or not.

// A k-digit number ‘NUM’ is an Armstrong number if and only if the k-th power of each digit sums to ‘NUM’.

// Example
// 153 = 1^3 + 5^3 + 3^3.

// Therefore 153 is an Armstrong number.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= ‘T’ <= 100
// 1 <= ‘N’ <= 10^9

// Time Limit: 1 sec
// Sample Input 1:
// 1
// 13
// Sample Output 1:
// NO
// Explanation For Sample Input 1:
// As 1^2 + 3^2 = 10 which is not equal to 13.So we can say it is not an Armstrong number.
// Sample Input 2:
// 1
// 371
// Sample Output 2:
// YES

bool isArmstrong(int n) {
    int sum = 0, temp = n, d = log10(n) + 1;
    while (temp) sum += pow(temp % 10, d), temp /= 10;
    return sum == n;
}
