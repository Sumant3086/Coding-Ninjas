//  Left Rotations of An Array
// Moderate
// 0/80
// Average time to solve is 10m
// Contributed by
// Asked in companies
// Problem statement
// You are given an array consisting of 'N' elements and you need to perform 'Q' queries on the given array. Each query consists of an integer which tells the number of elements by which you need to left rotate the given array. For each query return the final array obtained after performing the left rotations.

// Note:

// Perform each query on the original array only i.e. every output should be according to the original order of elements.
// Example:

// Let the array be [1, 2, 3, 4, 5, 6] and the queries be {2, 4, 1}. For every query, we’ll perform the required number of left rotations on the array.

// For the first query, rotate the given array to the left by 2 elements, so the resultant array is: [3, 4, 5, 6, 1, 2].

// For the second query, rotate the given array to the left by 4 elements, so the resultant array is: [5, 6, 1, 2, 3, 4].

// For the third query, rotate the given array to the left by 1 element, so the resultant array is: [2, 3, 4, 5, 6, 1].
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10 
// 1 <= N <= 1000
// 1 <= Q <= 100
// 0 <= Queries[i] <= 10^5
// -10^5 <= Array[i] <= 10^5

// Where 'Queries[i]' denotes the extent to which the array in each query needs to be rotated and 'Array[i]' denotes the array element.

// Time limit: 1 sec
// Sample Input 1:
// 2
// 5 3
// 7 8 6 1 2
// 8 4 3
// 2 2
// 12 15
// 1 2    
// Sample Output 1:
// 1 2 7 8 6 
// 2 7 8 6 1
// 1 2 7 8 6 
// 15 12
// 12 15
// Explanation for Sample Output 1:
// In test case 1, we have, array: [7, 8, 6, 1, 2] and three queries: {8, 4, 3}.

// For the first query we rotate the given array to the left 8 times, so the resultant array is: [1, 2, 7, 8, 6].

// For the second query we rotate the given array to the left 4 times, so the resultant array is: [2, 7, 8, 6, 1].

// For the third query we rotate the given array to the left 3 times, so the resultant array is: [1, 2, 7, 8, 6].

// In test case 2, we have, array: [12, 15] and two queries: {1, 2}.

// For the first query we rotate the given array to the left 1 time, so the resultant array is: [15, 12].

// For the second query we rotate the given array to the left 2 times, so the resultant array is: [12, 15].
// Sample Input 2:
// 2
// 6 3
// 10 20 30 40 50 60
// 12 2 5
// 1 2
// -15
// 100 89
// Sample Output 2:
// 10 20 30 40 50 60 
// 30 40 50 60 10 20 
// 60 10 20 30 40 50 
// -15
// -15
// Explanation for Sample Output 2:
// In test case 1, we have, array: [10, 20, 30, 40, 50, 60] and three queries: {12, 2, 5}.

// For the first query we rotate the given array to the left 12 times, so the resultant array is: [10, 20, 30, 40, 50, 60].

// For the second query we rotate the given array to the left 2 times, so the resultant array is: [30, 40, 50, 60, 10, 20].

// For the third query we rotate the given array to the left 5 times, so the resultant array is: [60, 10, 20, 30, 40, 50]

// In test case 2, we have, array: [-15] and two queries: {100, 89}.

// For the first query we rotate the given array to the left 100 times, so the resultant array is: [-15].

// For the second query we rotate the given array to the left 89 times, so the resultant array is: [-15]

#include <bits/stdc++.h> 
vector<vector<int>> leftRotationsOfArray(vector<int> nums, vector<int> queries) {
    // Write your code here.
    int n=nums.size();
    vector<vector<int>>res;
    for(int q:queries){
        int rotate=q%n;
        vector<int>rotated; 
        rotated.insert(rotated.end(),nums.begin()+rotate,nums.end());
        rotated.insert(rotated.end(),nums.begin(),nums.begin()+rotate);
        res.push_back(rotated);
    }
    return res;
}