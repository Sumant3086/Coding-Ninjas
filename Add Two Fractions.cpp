//  Add Two Fractions
// Easy
// 0/40
// Average time to solve is 10m
// Contributed by
// Asked in company
// Problem statement
// You’re given two fractions, a/b, and c/d. Your task is to add these two fractions and print this answer in the simplest form.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 10 ^ 4
// 1 <= a,b,c,d <= 10 ^ 9
// Time Limit: 1 sec

//  Where 'T' denotes the number of test cases, 'a', 'b', 'c' and 'd' denote the integers given as input in the problem.
// Sample Input 1 :
// 1
// 5 7 4 9
// Sample Output 1 :
// 73 63
// Explanation of Sample Input 1 :
// Sum of 5/7 + 4/9 = 73/63, which is already in its simplest form because we cannot reduce it further.
// Sample Input 2 :
// 1
// 1 500 2 1500
// Sample Output 2 :
// 1 300
// Explanation of Sample Input 2 :
// Sum of 1/500 + 2/1500 = 5/1500, which after reducing in simplest form becomes 1/300.

#include <bits/stdc++.h> 
long long int gcd(long long int a,long long int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}
vector<long long int> addFraction(int a, int b, int c, int d)
{
	// Write your code here
	long long int lcm=(b*(d/gcd(b,d)));
	vector<long long int>ans;
	long int sum=(a*(lcm/b))+(c*(lcm/d));
	long long int num3=sum/gcd(sum,lcm);
	lcm=lcm/gcd(sum,lcm);
	ans.push_back(num3);
	ans.push_back(lcm);
	return ans;
}