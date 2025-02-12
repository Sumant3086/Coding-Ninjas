// Fahrenheit to Celsius
// Easy
// 0/40
// Average time to solve is 15m
// Contributed by
// Asked in companies
// Problem statement
// Ninja has been assigned to convert temperature from Fahrenheit to Celsius. He has been given a starting Fahrenheit Value (S), ending Fahrenheit value (E), and step size (W). Unfortunately, he does not know how to convert from Fahrenheit to Celsius. Please help him to find the result.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 5
// 1 <= S <= E <= 10000
// 1 <= W <= 50

// Time limit: 1 sec.
// Sample Input 1:
// 2
// 0 100 20
// 25 50 25
// Sample Output 1:
// 0 -17
// 20 -6
// 40 4
// 60 15
// 80 26
// 100 37
// 25 -3
// 50 10
// Explanation Of Sample Input 1:
// Test case 1:
// For the first test case of sample output 1, we start from Fahrenheit temperature 0 and move up to 100 with a step size of 20 units. For every temperature, we have a corresponding celsius temperature present in the output table.

// Test case 2:   
// For the second test case of sample output 1, we start from Fahrenheit temperature 25 and move up to 50 with a step size of 25 units. For every temperature, we have a corresponding celsius temperature present in the output table.
// Sample Input 2:
// 2
// 50 150 15
// 600 650 7
// Sample Output 2:
// 50 10
// 65 18
// 80 26
// 95 35
// 110 43
// 125 51
// 140 60
// 600 315
// 607 319
// 614 323
// 621 327
// 628 331
// 635 335
// 642 338
// 649 342
// Explanation Of Sample Input 2:
// Test case 1:
// For the first test case of sample output 2, we have all celsius temperatures for the Fahrenheit range of 50 to 150.

#include <bits/stdc++.h> 
vector<vector<int>> fahrenheitToCelsius(int s, int e, int w)
{
	//type your code here
	vector<int>arr;
	int k=0;
	for(int i=s;i<=e;i+=w){
		arr.push_back(s+k*w);
		k++;
	}
	int m=arr.size();
	vector<vector<int>>ans;
	for(int i=0;i<m;i++){
		int cel=(arr[i]-32)*5/9;
		ans.push_back({arr[i],cel});
	}
	return ans;
}
