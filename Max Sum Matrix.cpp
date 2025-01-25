//  Max Sum Matrix
// Moderate
// 11/80
// Asked in companies
// Problem statement
// You are given a matrix “mat” of size ‘m’ * ‘n’ and an integer “val”. You need to find the maximum length of the side of a square having sum not greater than “val”.

// If there is no such square, return 0.

// For Example :
// m = 4, n = 3, mat = {{1, 1, 1}, {2, 1, 2}, {1, 2, 1}, {1, 1, 1}}, val = 5.

// In this example, the maximum value of length of side which can be obtained is 2, Having the starting index: {0, 0} or {0, 1} or {2, 0} or {2, 1}.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 10    
// 1 <= N, M <= 300
// 1 <= mat[i][j] <= 5000
// 1 <= val <= 50000

// Time limit: 1 sec
// Sample Input 1 :
// 2
// 4 2
// 1 1
// 1 1
// 1 1
// 1 1
// 25
// 3 3
// 3 3 3
// 3 1 3
// 3 3 3
// 2
// Sample Output 1 :
// 2
// 1
// Explanation For Sample Input 1 :
// In the first test case, val is high enough, so we can take a square of the maximum side, which is 2.
// Hence the answer is 2.

// In the second test case, val is 2, hence the only square matrix having the sum of value less than 2 is {{1}}, having side equal to 1.
// Hence the answer is 1.
// Sample Input 2 :
// 2
// 1 5
// 1 4 2 3 4
// 100
// 6 4
// 1 8 7 3
// 4 2 9 7
// 1 2 7 1
// 88 5 4 11
// 4 2 6 2
// 8 45 66 5
// 11
// Sample Output 2 :
// 1
// 2



int maxSumMatrix(int n, int m, vector<vector<int>> &mat, int val) {
    // Write your code here.
    vector<vector<int>>prefS(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        vector<int>curr(m,0);
        for(int j=0;j<m;j++){
            curr[j]=(j>0?curr[j-1]:0)+mat[i][j];
            prefS[i][j]=curr[j]+(i>0?prefS[i-1][j]:0);
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int left=1;
            int right=min(i,j)+1;
            while(left<=right){
                int mid=(left+right)/2;
                int sum=prefS[i][j];
                if(i-mid>=0)sum-=prefS[i-mid][j];
                if(j-mid>=0)sum-=prefS[i][j-mid];
                if(i-mid>=0 && j-mid>=0)sum+=prefS[i-mid][j-mid];
                if(sum<=val){
                    ans=max(ans,mid);
                    left=mid+1;
                }else{
                    right=mid-1;
                }
            }
        }
    }
    return ans;
}
