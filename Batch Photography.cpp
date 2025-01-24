//  Batch Photography
// Hard
// 120/120
// Average time to solve is 30m
// Asked in companies
// Problem statement
// Alex has bought a new machine that does photocopies of photos in batches of minimum size ‘K’. Alex has ‘N’ photos, whose resolution is given in an integer array ‘photos’. The machine has some downsides as well. The error in photocopying a batch is the absolute difference between the highest resolution photo and the lowest resolution photo in the batch.

// Now Alex will divide the photos into some groups of size at least ‘K’ and feed it to the machine. The maximum error is the maximum of the errors from each batch. He wants to minimize the maximum error. Can you help him divide the photos into batches efficiently and tell him the minimum maximum error he can achieve?

// Example: Let the resolutions be [1, 5, 2] and K = 2. So there is only one way of dividing the array, which is a single group of all three elements. The error is therefore 5 - 1 = 4.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 1 <= K <= N <= 10^4
// 1 <= photos[i] <= 10^9

// Time Limit: 1 sec
// Sample Input 1:
// 2
// 5 2
// 50 110 130 40 120
// 4 1
// 2 3 4 1
// Sample Output 1:
// 20
// 0
// Explanation for Sample Input 1:
// In the first test case, the photos should be split into 2 groups: [40, 50] and [110, 120, 130]. The processing time of the first group is 10, and the processing time of the second group is 20. The maximum between 10 and 20 is 20. It is impossible to split the photos into groups in such a way that the processing time of division is less than 20.
// In the second test case, the photos should be split into four groups, each containing one photo. So the minimal possible processing time of a division is 0.
// Sample Input 2:
// 2
// 5 2
// 5 7 3 3 5
// 3 2
// 1 2 3
// Sample Output 2:
// 2
// 2

int fun(int idx,vector<int>& arr,int n, int k, vector<int> &dp){
    if(idx==n){
        return 0;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    int take=1e9;
    for(int i=idx;i<n;i++){
        if(i-idx+1>=k){
            take=min(take,max(arr[idx]-arr[i],fun(i+1,arr,n,k,dp)));
        }
    }
    return dp[idx]=take;
}
int photography(int n, int k, vector<int> &photos) {
    // Write your code here.
    sort(photos.rbegin(),photos.rend());
    vector<int>dp(n+1,-1);
    return fun(0,photos,n,k,dp);
}