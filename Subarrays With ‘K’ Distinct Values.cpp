// Subarrays With ‘K’ Distinct Values
// Moderate
// 0/80
// Average time to solve is 15m
// Contributed by
// Asked in companies
// Problem statement
// You are given an array ‘ARR’ having ‘N’ integers. You are also given an integer ‘K’. The task is to count the number of subarrays that have ‘K’ distinct values.



// Subarray: A consecutive sequence of one or more values taken from an array.



// For Example :
// ‘N’ = 4, ‘K’ = 2
// ‘ARR’ = [1, 1, 2, 3]

// There are ‘3’ subarrays with ‘2’ distinct elements, which are as follows: [1, 2], [2, 3], [1, 1, 2].
// Thus, you should return ‘3’ as the answer.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 5 2
// 2 1 3 2 4
// Sample Output 1 :
// 9
// Explanation of Sample Input 1 :
// There are ‘4’ subarrays with exactly ‘2’ distinct elements, which are as follows: [2, 1], [1, 3], [3, 2], [2, 4].

// Thus, you should return ‘4’ as the answer.
// Sample Input 2 :
// 5 4
// 1 2 3 4 5
// Sample Output 2 :
// 2
// Constraints :
// 1 <= K <= N <= 10^5
// 1 <= Value in each element of ‘ARR’ <= 10^9

// Time limit: 1 second
// C++ (g++ 11)
// 00
//  : 
// 09
//  : 
// 43
// 123456781112131415161718192091021
// int helper(vector<int>& arr,int k){
//     unordered_map<int,int>mp;
//     int left=0;
//     int count=0;
//     for(int right=0;right<arr.size();right++){
//         mp[arr[right]]++;
//         while(mp.size()>k){
//             if(--mp[arr[left]]==0){
//                 mp.erase(arr[left]);
//             }

// Last saved at 10:40 PM
// Sample test case
// Custom test case



int helper(vector<int>& arr,int k){
    unordered_map<int,int>mp;
    int left=0;
    int count=0;
    for(int right=0;right<arr.size();right++){
        mp[arr[right]]++;
        while(mp.size()>k){
            if(--mp[arr[left]]==0){
                mp.erase(arr[left]);
            }
            left++;
        }
        count+=(right-left+1);
    }
    return count;
}
int kDistinctSubarrays(vector<int> &arr, int n, int k)
{
    // Write your code here
    return helper(arr,k)-helper(arr,k-1);
}