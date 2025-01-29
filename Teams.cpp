// Teams
// Easy
// 0/40
// Average time to solve is 20m
// Contributed by
// Asked in company
// Problem statement
// You hosted a great party and invited all of your friends. You have an infinite number of friends. Since you can’t remember all of their names, you have given each of them an ‘id’ numbered from ‘1’ to ‘∞’. You decided to play a game ‘T’ times. Each time you select an even number of friends having ‘id’ from the range ‘L’ to ‘R’. You play the game by dividing all of your friends into ‘(R - L + 1) / 2’ teams, i.e. every team consists of two friends, and every friend is a member of exactly one team. But there is a problem. Two friends will only form a team if the gcd of their ‘id’ is 1. I.e. gcd(i, j) must be 1 and ‘L’ <= i < j <= ‘R’.

// For each game. If you can divide the friends into ‘(R - L + 1) / 2’ teams, print the resulting pairs,i.e. Pair of friend’s id who are forming a team, else print no solution exists. If there are multiple solutions, you can print any of them.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints -
// 1<= ‘T’ <= 10
// 1 <= ‘L’ < ‘R’ <= 10 ^ 18.
// 2 <= ‘R - L + 1’ <= 10 ^ 5.
// ‘R - L + 1’ is always even.

// Time Limit: 1 sec
// Sample Input 1:
// 2
// 1 8
// 1 4
// Sample Output-1
// 1
// 2 7
// 4 1
// 3 8
// 6 5
// 1
// 1 4
// 3 2
// Explanation for Sample Input 1:
// For Case 1:
//     Gcd of all the pairs are 1, and no number is in more than one pair.
// For Case 2:
//     Gcd of all the pairs are 1, and no number is in more than one pair.
// Sample Input 2:
// 2
// 3 8
// 1 2
// Sample Output-2
// 1
// 4 7
// 3 8
// 6 5
// 1
// 1 2


#include <bits/stdc++.h> 
vector<vector<long long>> teams(long long L, long long R)
{
	// Write your code here
	vector<vector<long long>>res;
	res.push_back({1});
	for(long long i=L;i<=R;i+=2){
		res.push_back({i,i+1});
	}
	return res;
}