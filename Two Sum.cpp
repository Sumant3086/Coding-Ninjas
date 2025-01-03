// Two Sum
// Easy
// 40/40
// Average time to solve is 10m
// Contributed by
// 1653 upvotes
// Asked in companies
// Problem statement
// You are given an array of integers 'ARR' of length 'N' and an integer Target. Your task is to return all pairs of elements such that they add up to Target.

// Note:

// We cannot use the element at a given index twice.
// Follow Up:

// Try to do this problem in O(N) time complexity. 
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 ≤ n ≤ 105
// 1 ≤ arr[i] ≤ 105

// Where 'T' denotes the number of test cases, 'N' represents the size of the array, 'TARGET' represents the sum required, and 'ARR[i]' represents array elements.

// Time Limit: 1 sec.
// Sample Input 1 :
// 2
// 4 9
// 2 7 11 13
// 5 1
// 1 -1 -1 2 2
// Sample Output 1:
// 2 7
// -1 2
// -1 2
// Explanation for Sample 1:
// For the first test case, we can see that the sum of  2 and 7 is equal to 9 and it is the only valid pair.

// For the second test case, there are two valid pairs (-1,2) and (-1,2), which add up to 1.
// Sample Input 2 :
// 1
// 4 16
// 2 7 11 13
// Sample Output 2 :
// -1 -1
// C++ (g++ 11)
// 12345678910111213141516171819202122
// 			res.push_back({need,curr});
// 			mp[need]--;
// 		}else{
// 			mp[curr]++;
// 		}
// 	} 
// 	if(res.empty()){
// 		return {{-1,-1}};
// 	}
// 	return res;

// Last saved at 1:34 PM



#include <bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here.
	map<int,int> mp;
	vector<pair<int,int>>res;
	for(int i=0;i<n;i++){
		int curr=arr[i];
		int need=target-curr;
		if(mp[need]>0){
			res.push_back({need,curr});
			mp[need]--;
		}else{
			mp[curr]++;
		}
	} 
	if(res.empty()){
		return {{-1,-1}};
	}
	return res;
}
