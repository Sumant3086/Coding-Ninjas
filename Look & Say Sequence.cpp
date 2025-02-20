// Look & Say Sequence
// Easy
// 0/40
// Average time to solve is 10m
// Contributed by
// Asked in company
// Problem statement
// You have been given a positive integer N. Your task is to find the Nth term of the Look-And-Say sequence.

// The Look-And-Say sequence is a sequence of positive integers. The sequence is as follows:

// 1, 11, 21, 1211, 111221, 312211, 13112221,...

// This sequence is constructed in the following way:

// The first number is 1.

// This is read as “One 1”. 
// Hence, the second number will be 11.

// The second number is read as “Two 1s”. 
// Hence, the third number will be 21.

// The third number is read as “One 2, One 1”. 
// Hence, the fourth number will be 1211.

// The fourth term is read as “One 1, One 2, Two 1s”.
// Hence, the fifth term will be 111221. And so on.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 100
// 1 <= N <= 40

// Time Limit: 1 sec
// Sample Input 1:
// 3
// 1
// 2
// 3
// Sample Output 1:
// 1
// 11
// 21
// Explanation for Sample 1:
// The first term is 1.
// The second term is 11.
// The third term is 21.
// Sample Input 2:
// 1
// 6
// Sample Output 2:
// 312211
// C++ (g++ 11)
// 00
//  : 
// 03
//  : 
// 55
// 12345678910111213141516171819202122232425262728
// 					ans+=prev[j-1];
// 				}
// 			}
// 		}
// 		prev=ans;
// 	}
// 	return prev;
// }
// Last saved at 10:11 PM
// Sample test case
// Custom test case




#include <bits/stdc++.h> 
string lookAndSaySequence(int n) 
{
	// Write your code here
	if(n==1)return "1";
	if(n==2)return "11";
	string ans="";
	string prev="";
	prev="11";
	int count=0;
	for(int i=3;i<=n;i++){
		count=1;
		ans="";
		for(int j=1;j<=prev.size();j++){
			if(prev[j]==prev[j-1]){
				count++;
			}else{
				if(count!=0){
					ans+=to_string(count);
					count=1;
					ans+=prev[j-1];
				}
			}
		}
		prev=ans;
	}
	return prev;
}