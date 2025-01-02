//  Spiral Matrix
// Easy
// 40/40
// Average time to solve is 15m
// Contributed by
// 150 upvotes
// Asked in companies
// Problem statement
// You are given a 2-D array 'MATRIX' of dimensions N x M, of integers. You need to return the spiral path of the matrix.

// Example Of Spiral Path:


// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 5
// 1 <= N  <= 10 ^ 2
// 1 <= M <= 10 ^ 2
// -10 ^ 9 <= MATRIX[ i ][ j ] <= 10 ^ 9

// Time Limit: 1sec.
// Sample Input 1 :
// 2
// 4 4
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16
// 3 6
// 1 2 3 4 5 6 
// 7 8 9 10 11 12 
// 13 14 15 16 17 18
// Sample Output 1 :
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// 1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11
// Explanation of the Sample Input 1 :
// The spiral path for the test case 2 is as shown below:

// Sample Input 2 :
// 2
// 1 1
// 4
// 1 5
// 1 2 3 4 5
// Sample Output 2 :
// 4
// 1 2 3 4 5
// Explanation of the Sample Input 2:
// In the first test case, there is only one element in the matrix, so the spiral path is only that element.

// In the second test case, there is only one row or 1-D matrix, so the spiral path is only the single traversal of the matrix.

#include <bits/stdc++.h> 
vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
    // Write your code here.
           int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col;
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;
        vector<int>ans;
        while(count<total){
            for(int idx=startingCol;count<total && idx<=endingCol;idx++){
                ans.push_back(matrix[startingRow][idx]);
                count++;
            }
            startingRow++;
            for(int idx=startingRow;count<total && idx<=endingRow;idx++){
                ans.push_back(matrix[idx][endingCol]);
                count++;
            }
            endingCol--;
            for(int idx=endingCol;count<total && idx>=startingCol;idx--){
                ans.push_back(matrix[endingRow][idx]);
                count++;
            }
            endingRow--;
            for(int idx=endingRow;count<total && idx>=startingRow;idx--){
                ans.push_back(matrix[idx][startingCol]);
                count++;
            }
             startingCol++;
        }
        return ans;
}