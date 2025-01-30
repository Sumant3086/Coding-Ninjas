// Ninja’s Training
// Moderate
// 80/80
// Average time to solve is 30m
// Contributed by
// 849 upvotes
// Asked in companies
// Problem statement
// Ninja is planing this ‘N’ days-long training schedule. Each day, he can perform any one of these three activities. (Running, Fighting Practice or Learning New Moves). Each activity has some merit points on each day. As Ninja has to improve all his skills, he can’t do the same activity in two consecutive days. Can you help Ninja find out the maximum merit points Ninja can earn?

// You are given a 2D array of size N*3 ‘POINTS’ with the points corresponding to each day and activity. Your task is to calculate the maximum number of merit points that Ninja can earn.

// For Example
// If the given ‘POINTS’ array is [[1,2,5], [3 ,1 ,1] ,[3,3,3] ],the answer will be 11 as 5 + 3 + 3.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 1 <= N <= 100000.
// 1 <= values of POINTS arrays <= 100 .

// Time limit: 1 sec
// Sample Input 1:
// 2
// 3
// 1 2 5 
// 3 1 1
// 3 3 3
// 3
// 10 40 70
// 20 50 80
// 30 60 90
// Sample Output 1:
// 11
// 210
// Explanation of sample input 1:
// For the first test case,
// One of the answers can be:
// On the first day, Ninja will learn new moves and earn 5 merit points. 
// On the second day, Ninja will do running and earn 3 merit points. 
// On the third day, Ninja will do fighting and earn 3 merit points. 
// The total merit point is 11 which is the maximum. 
// Hence, the answer is 11.

// For the second test case:
// One of the answers can be:
// On the first day, Ninja will learn new moves and earn 70 merit points. 
// On the second day, Ninja will do fighting and earn 50 merit points. 
// On the third day, Ninja will learn new moves and earn 90 merit points. 
// The total merit point is 210 which is the maximum. 
// Hence, the answer is 210.
// Sample Input 2:
// 2
// 3
// 18 11 19
// 4 13 7
// 1 8 13
// 2
// 10 50 1
// 5 100 11
// Sample Output 2:
// 45
// 110


int backTrack(int last,int day,int n,vector<vector<int>> &points,vector<vector<int>> &dp){
    if(day>=n)return 0;
    if(dp[day][last]!=-1){
        return dp[day][last];
    }
    int maxi=0;
    for(int i=0;i<3;i++){
        int totPoints=0;
        int currPoints=0;
        if(i!=last){
            currPoints+=points[day][i];
        }
        totPoints=currPoints+backTrack(i,day+1,n,points,dp);
        maxi=max(maxi,totPoints);
    }
    return dp[day][last]=maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>>dp(n,vector<int>(3+1,-1));
    return backTrack(3,0,n,points,dp);
}