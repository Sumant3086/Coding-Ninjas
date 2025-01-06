// Hard
// 120/120
// Average time to solve is 25m
// Contributed by
// Asked in companies
// Problem statement
// You are given an ‘N’ x ‘M’ matrix ‘MAT’ and an integer ‘K’. Your task is to find the maximum sum of a rectangle in the matrix which is less than or equal to ‘K’.

// For Example:

// You are given ‘MAT’= [[1, 2],[3, 4]] and ‘K’ = 8. 

// Then the answer will be 7 (the sum of the red rectangle).
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 1 <= N <= 100
// 1 <= M <= 100
// -10^6 <= K <= 10^6
// -10^6 <= MAT[i][j] <= 10^6

// Time Limit: 1 sec
// Sample Input 1:
// 2
// 2 2 8
// 1 2
// 3 4
// 3 2 5
// 1 2
// -1 -2
// 3 4
// Sample Output 1:
// 7
// 4
// Explanation of Sample Input 1:
// For the first test case, the answer will be 7 (the sum of the red rectangle).

// For the second test case, the answer will be 4 (the sum of the red rectangle).

// Sample Input 2:
// 2
// 2 2 2
// 1 1
// 1 1
// 3 2 4
// 1 2
// -1 2
// -4 -7
// Sample Output 2:
// 2
// 4


#include <bits/stdc++.h> 
int maxSum(int k, vector<vector<int>> &mat)
{
    // Write your code here.
    int n=mat.size();
    int m=mat[0].size();
    int maxS=INT_MIN;
    for(int r1=0;r1<n;r1++){
        vector<int>colS(m,0);
        for(int r2=r1;r2<n;r2++){
            for(int col=0;col<m;col++){
                colS[col]+=mat[r2][col];
            }
            set<int>prefS;
            prefS.insert(0);
            int currS=0;
            for(int sum:colS){
                currS+=sum;
                auto it=prefS.lower_bound(currS-k);
                if(it!=prefS.end()){
                    maxS=max(maxS,currS- *it);
                }
                prefS.insert(currS);
            }
        }
    }
    return maxS;
}