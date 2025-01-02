//  Subset Sum Equal To K
// Moderate
// 80/80
// Average time to solve is 30m
// 513 upvotes
// Asked in companies
// Problem statement
// You are given an array/list ‘ARR’ of ‘N’ positive integers and an integer ‘K’. Your task is to check if there exists a subset in ‘ARR’ with a sum equal to ‘K’.

// Note: Return true if there exists a subset with sum equal to ‘K’. Otherwise, return false.

// For Example :
// If ‘ARR’ is {1,2,3,4} and ‘K’ = 4, then there exists 2 subsets with sum = 4. These are {1,3} and {4}. Hence, return true.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 5
// 1 <= N <= 10^3
// 0 <= ARR[i] <= 10^9
// 0 <= K <= 10^3

// Time Limit: 1 sec
// Sample Input 1:
// 2
// 4 5
// 4 3 2 1
// 5 4
// 2 5 1 6 7
// Sample Output 1:
// true
// false
// Explanation For Sample Input 1:
// In example 1, ‘ARR’ is {4,3,2,1} and ‘K’ = 5. There exist 2 subsets with sum = 5. These are {4,1} and {3,2}. Hence, return true.
// In example 2, ‘ARR’ is {2,5,1,6,7} and ‘K’ = 4. There are no subsets with sum = 4. Hence, return false.
// Sample Input 2:
// 2
// 4 4
// 6 1 2 1
// 5 6
// 1 7 2 9 10
// Sample Output 2:
// true
// false
// Explanation For Sample Input 2:
// In example 1, ‘ARR’ is {6,1,2,1} and ‘K’ = 4. There exist 1 subset with sum = 4. That is {1,2,1}. Hence, return true.
// In example 2, ‘ARR’ is {1,7,2,9,10} and ‘K’ = 6. There are no subsets with sum = 6. Hence, return false.


// Hints:
// 1. Can you find every possible subset of ‘ARR’ and check if its sum is equal to ‘K’?
// 2. Can you use dynamic programming and use the previously calculated result to calculate the new result?
// 3. Try to use a recursive approach followed by memoization by including both index and sum we can form. 
// C++ (g++ 5.4)
// 272829567891011121314151617181920212223242526303132
//     return dp[n][k];
// }
 
// 98 of 243
// =
// Last saved at 1:12 PM


// #include <bits/stdc++.h> 

// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     // Write your code here.
//     if(n==0){
//         return(k==0)?true:false;
//     }
//     if(arr[n-1]>k){
//         return subsetSumToK(n-1,k,arr);
//     }
//     return subsetSumToK(n-1,k,arr) || subsetSumToK(n-1,k-arr[n-1],arr);
// }

#include <bits/stdc++.h>
using namespace std;

bool subsetSumToK(int n, int k, vector<int>& arr) {
    vector<vector<bool>>dp(n+1,vector<bool>(k+1,false));
    for(int i=0;i<=n;i++){
        dp[i][0]=true;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(arr[i-1]<=j){
                dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][k];
}