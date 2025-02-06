//  Set Matrix Ones
// Easy
// 0/40
// Average time to solve is 15m
// Contributed by
// Asked in company
// Problem statement
// You have been given a non-empty grid ‘MAT’ consisting of only 0s and 1s. Your task is to modify it in such a way that if a cell has value 1 (MAT[i][j] == 1), then all the cells of the i-th row and j-th column should be changed to 1.

// For Example
// If the given grid is this:
// [0, 0, 0]
// [0, 0, 1]

// Then the modified grid will be
// [0, 0, 1],
// [1, 1, 1]
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints
// 1 <= T <= 100
// 1 <= N <= 50
// 1 <= M <= 50
// 0 <= MAT[i][j] <= 1

// Time limit: 1 sec
// Sample Input 1
// 2
// 2 2
// 1 0
// 0 0
// 1 2
// 0 1
// Sample Output 1:
// 1 1
// 1 0
// 1 1
// Explanation of the Sample Input 1
// Test Case 1: For the given grid, the element in the first row and column is 1, thus all the elements in the first row and first column are set to 1.

// Test Case 2: For the given grid, there is only one row and the element in this row is 1, thus all elements in the grid are set to 1.
// Sample Input 2
// 2
// 3 4
// 1 0 0 1
// 0 0 1 0
// 0 0 0 0
// 2 3
// 0 0 0
// 0 0 1    
// Sample Output 2
// 1 1 1 1
// 1 1 1 1
// 1 0 1 1
// 0 0 1
// 1 1 1

#include <bits/stdc++.h> 
void setMatrixOnes(vector<vector<int>> &MAT, int n, int m)
{
    // Write your code here.
    vector<int>row(n,0);
    vector<int>col(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(MAT[i][j]==1){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] || col[j]){
                MAT[i][j]=1;
            }
        }
    }
}
