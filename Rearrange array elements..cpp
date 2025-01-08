// Rearrange array elements.
// Easy
// 0/40
// Average time to solve is 15m
// Asked in companies
// Problem statement
// Given an array ‘A’ having ‘N’ integers and an integer ‘m’. You need to rearrange the array elements such that after re-arrangement difference of array elements with ‘m’ should be in a sorted fashion.

// If the difference between any two array elements and ‘m’ is the same, then the element which comes first in the given array will be placed first in the re-arranged array.

// For Example
// If we have A =  [3, 5, 7, 9, 2, 6]  and m = 5.
// Difference of array elements with m : [2, 0, 2, 4, 3, 1].
// Array after rearrangement : [5, 6, 3, 7, 2, 9].
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints
// 1 <= T <= 10
// 1 <= N <= 10^5
// 1 <= m <= 10^5

// Where ‘T’ is the number of test cases, ‘N’ is the length of array ‘A’, and ‘m’ is the value given as described in the problem statement.
// Sample Input 1
// 2
// 4 6
// 3 8 1 4
// 2 12
// 5 5
// Sample Output 1
// 8 4 3 1
// 5 5
// Explanation Of Sample Input 1
// Test Case 1: The array given in this case is [ 3, 8, 1, 4 ] and m = 6.
// The difference of array elements with ‘6’ is [ 3, 2, 5, 2 ]. 
// Sorted order of difference is 2->2->3->5
// Both ‘8’ and ‘2’ have a difference of ‘2’ and ‘8’ comes before ‘6’.So in the rearranged array, ‘8’ will be placed before ‘6’.
// Therefore rearranged array will look like 8, 4, 3, 1.

// Test Case 2: The difference between the array elements and m, i.e., 12, is the same.
// So rearranged array is 5 5.
// Sample Input 2
// 2
// 5 9
// 12 4 2 19 5
// 3 3
// 1 2 3
// Sample Output 2
// 12 5 4 2 19
// 3 2 1


#include <bits/stdc++.h> 
vector<int> rearrangeArray(vector<int> &A, int m)
{
    //Write Your Code Here.
    int n=A.size();
    vector<pair<int,int>>diff;
    for(int i=0;i<n;i++){
        diff.push_back({abs(A[i]-m),i});
    }
    sort(diff.begin(),diff.end());
    vector<int>res;
    for(auto &num:diff){
        res.push_back(A[num.second]);
    }
    return res;
}
