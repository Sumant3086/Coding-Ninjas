//  Largest subarray with equal number of 0s and 1s
// Moderate
// 80/80
// Average time to solve is 10m
// 14 upvotes
// Asked in companies
// Problem statement
// You are given an array consisting of 0s and 1s. You need to find the length of the largest subarray with an equal number of 0s and 1s.

// For example:

// If the given array is: [0, 0, 1, 0, 1] The largest subarray would be: [0, 1, 0, 1] (last 4 elements) having length 4.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 ≤ T ≤ 10
// 1 ≤ N ≤ 10^5
// 0 ≤ Ai ≤ 1

// Time Limit : 1 sec 
// Sample Input 1:
// 2
// 5
// 0 0 1 0 1
// 3
// 1 0 1
// Sample Output 1:
// 4
// 2
// Explanation of Input 1:
// The first test case is already explained in the problem statement.

// The second test case, the given array is: [1, 0, 1] The largest subarray would be: [1, 0] or [0,1].
// Sample Input 2:
// 2
// 3
// 1 1 1
// 5
// 0 0 0 1 1
// Sample Output 2
// 0
// 4

#include <bits/stdc++.h> 
int findSubarray(vector<int> arr)
{
    // Write your code here.
    int N=arr.size();
    unordered_map<int,int>map;
        map[0]=-1;
        int len=0;
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=(arr[i]==1)?1:-1;
            if(map.count(sum)){
                len=max(i-map[sum],len);
            }else{
                map[sum]=i;
            }
        }
        return len;
}
