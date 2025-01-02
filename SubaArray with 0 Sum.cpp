//  Subarrays With Zero Sum
// Easy
// 40/40
// Contributed by
// 43 upvotes
// Asked in companies
// Problem statement
// You are given ‘N’ integers in the form of an array ‘ARR’. Count the number of subarrays having their sum as 0.

// For example :
// Let ‘ARR’ be: [1, 4, -5]
// The subarray [1, 4, -5] has a sum equal to 0. So the count is 1.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 10
// 1 <= N <= 10^5
// -10^5 <= ARR[i] <= 10^5

// Time Limit: 1 sec
// Sample Input 1 :
// 2
// 3
// 1 4 -5
// 4
// -1 1 0 1
// Sample Output 1 :
// 1
// 3
// Explanation For Sample Output 1 :
// For test case 1: 
// The subarray [1, 4, -5] has a sum equal to 0. 
// So the count is 1.

// For test case 2: 
// The subarray [-1, 1], [-1, 1, 0] and  [0] has a sum equal to 0. 
// So the count is 3.
// Sample Input 2 :
// 2
// 4
// -1 0 1 -1
// 3
// -2 0 2
// Sample Output 2 :
// 4
// 2

#include <bits/stdc++.h> 
int countSubarrays(int n, vector<int> &arr){
    unordered_map<int,int>map;
    int sum=0;
    int count=0;
    map[0]=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(map.find(sum)!=map.end()){
            count+=map[sum];
        }
        map[sum]++;
    }
    return count;
}