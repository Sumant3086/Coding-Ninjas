// Merge overlapping intervals
// Easy
// 0/40
// Average time to solve is 10m
// Contributed by
// Asked in companies
// Problem statement
// Given 'N' number of intervals, where each interval contains two integers denoting the boundaries of the interval. The task is to merge all the overlapping intervals and return the list of merged intervals sorted in ascending order.

// Two intervals will be considered to be overlapping if the starting integer of one interval is less than or equal to the finishing integer of another interval, and greater than or equal to the starting integer of that interval.

// Example:
// for the given 5 intervals - [1,4], [3,5], [6,8], [10,12], [8,9].
// Since intervals [1,4] and [3,5] overlap with each other, we will merge them into a single interval as [1,5].

// Similarly [6,8] and [8,9] overlaps, we merge them into [6,9].

// Interval [10,12] does not overlap with any interval.

// Final List after merging overlapping intervals: [1,5], [6,9], [10,12]
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 100
// 1 <= N <= 1000
// 0 <= start, finish <= 10^9

// Where 'T' denotes the number of test cases, 'N' denotes the number of intervals respectively, 'start' and 'finish' are the starting and finishing times for intervals.   

// Time Limit: 1 sec
// Sample Input 1:
// 1
// 2
// 1 3
// 3 5
// Sample Output 1:
// 1 5  
// Explanation for Sample Input 1
// Since these two intervals overlap at point 3 so we merge them and the new interval becomes (1,5).
// Sample Input 2:
// 3
// 5
// 1 3 6 8 10
// 4 5 8 9 12
// 10
// 1 2 3 1 9 5 11 7 12 14
// 3 7 5 8 10 11 12 10 12 17
// 7
// 1 4 2 5 6 2 8
// 2 6 7 6 9 11 12
// Sample Output 2:
// 1 5
// 6 9
// 10 12
// 1 12
// 14 17
// 1 12

#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> interval)
{
    // Write your code here
    if(interval.empty())return {};
    sort(interval.begin(),interval.end());
    vector<vector<int>>ans;
    ans.push_back(interval[0]);
    for(int i=1;i<interval.size();i++){
        if(interval[i][0]<=ans.back()[1]){
            ans.back()[1]=max(ans.back()[1],interval[i][1]);
        }else{
            ans.push_back(interval[i]);
        }
    }
    return ans;
}
