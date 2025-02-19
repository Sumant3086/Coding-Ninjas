// Absolute difference in an array
// Easy
// 0/40
// Average time to solve is 15m
// Contributed by
// Asked in companies
// Problem statement
// You are given an array/list 'ARR' consisting of 'N' non - negative integers. Your task is to return the running absolute difference of the elements at even and odd index positions separately.

// The index of the first element in the array is considered to be zero that is 0 - based indexing is considered for calculating the parity of the index.

// Example:

// Consider the array - [1, 2, 3, 4, 5, 6]
// The elements at even positions will be 1, 3, 5. The running absolute difference of elements will be - 
// |1 - 3| = 2 , |2 -5| = 3. Hence our answer will be 3.

// The elements at odd positions will be 2, 4, 6. The running absolute difference of elements will be - 
// |2 - 4| = 2 , |2 - 6| = 4. Hence our answer will be 4.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
//  1 <= T <= 10
//  1 <= N <= 5 * 10^4
//  1 <= ARR[i] <=10^5

// Time Limit: 1 sec
// Sample Input 1:
// 2
// 5
// 5 4 3 4 2
// 4
// 3 5 3 1
// Sample Output 1:
// 0 0
// 0 4
// Explanation of Input 1:
// For test case 1:
// • The running absolute difference of elements at even positions will be : |5 - 3| = 2, |2 - 2| = 0.
// • The running absolute difference of elements at odd positions will be : |4 - 4| = 0.
// For test case 2:
// • The running absolute difference of elements at even positions will be : |3 - 3| = 0.
// • The running absolute difference of elements at odd positions will be : |5 - 1| = 4.
// Sample Input 2:
// 1
// 7
// 10 20 30 40 50 60 70
// Sample Output 2:
// 40 40

#include <bits/stdc++.h> 

pair<int, int> absDiff(vector<int>& arr, int n)

{

    // Write your code here.

    pair<int,int>ans;

    int ans1=0,ans2=0;

    int i=0,j=0;

    while(i!=n){

        if(i%2==0){

            ans1=abs(arr[i]-ans1);

        }else{

            ans2=abs(arr[i]-ans2);

        }

        i++;

    }

    ans.first = ans1;

    ans.second=ans2;

    return ans;

}