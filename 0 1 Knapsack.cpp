//  0 1 Knapsack
// Easy
// 40/40
// Average time to solve is 15m
// Contributed by
// 360 upvotes
// Asked in companies
// Problem statement
// A thief is robbing a store and can carry a maximal weight of W into his knapsack. There are N items and the ith item weighs wi and is of value vi. Considering the constraints of the maximum weight that a knapsack can carry, you have to find and return the maximum value that a thief can generate by stealing items.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 1 <= N <= 10^2
// 1<= wi <= 50
// 1 <= vi <= 10^2
// 1 <= W <= 10^3

// Time Limit: 1 second
// Sample Input:
// 1 
// 4
// 1 2 4 5
// 5 4 8 6
// 5
// Sample Output:
// 13

#include <bits/stdc++.h> 
int helper(vector<int>&weight,vector<int>&value,int n,int maxWeight,vector<vector<int>>&dp){
	if(maxWeight==0 || n==0){
		return 0;
	}
	if(dp[maxWeight][n]!=-1){
		return dp[maxWeight][n];
	}
	if(weight[n-1]<=maxWeight){
		return dp[maxWeight][n]=max(value[n-1]+helper(weight,value,n-1,maxWeight-weight[n-1],dp),helper(weight,value,n-1,maxWeight,dp));
	}
	return helper(weight,value,n-1,maxWeight,dp);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector<vector<int>>dp(maxWeight+1,vector<int>(n+1,-1));
	return helper(weight,value,n,maxWeight,dp);	

}