// 4Sum
// Moderate
// 80/80
// Average time to solve is 30m
// Problem statement
// You are given an array ‘NUMS’ of length ‘N’. You are also given an integer ‘TARGET’.



// Return an array of all the unique quadruplets [ ‘NUMS[ a ]’, ‘NUMS[ b ]’, ‘NUMS[ c ]’, ‘NUMS[ d ]’ ] with the following conditions:



// i. 0 <= a, b, c, d < ‘N’ and a, b, c, and d are distinct.

// ii. NUMS[ a ] + NUMS[ b ] + NUMS[ c ] +NUMS[ d ] = TARGET



// Return the array in any order.



// Note:


// (NUMS[ a ], NUMS[ b ], NUMS[ c ], NUMS[ d ]), (NUMS[ a ], NUMS[ d ], NUMS[ c ], NUMS[ b ]), (NUMS[ a ], NUMS[ c ], NUMS[ b ], NUMS[ d ])... all of them are treated or considered the same quadruplets.



// Two quadruplets are different if there is any integer in one quadruplet which is not in the other.



// The solution will be verified by the number of valid quadruplets returned. In the output, only the number of valid quadruplets will be printed.



// Example:
// Input: ‘N’ = 5,  ‘TARGET’ = 5, ‘NUMS’ = [ 1, 2, 1, 0, 1 ]

// Output: 1.

// There is only one unique quadruplet with sum = 5 and that is [1, 2, 1, 1].
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 6 8
// 2 2 2 2 1 3
// Sample Output 1 :
// 2
// Explanation Of Sample Input 1:
// (2+2+2+2) = (2+2+1+3) = 4.
// Sample Input 2:
// 4 4
// 1 1 1 0
// Sample Output 2 :
// 0
// Constraints :
// 4 <= N <= 100
// -10^6 <= NUMS[ i ] <= 10^6
// -10^6 <= TARGET <= 10^6


// Time Limit: 1 sec
// C++ (g++ 5.4)
// 01
//  : 
// 20
//  : 
// 58
// 123456789101112131415161718192021222324252627
//                     l++;
//                 }else{
//                     r--;
//                 }
//             }
//         }
//     }
//     return res;
// }
// Last saved at 11:29 PM

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    // Write your code here
    sort(nums.begin(),nums.end());
    vector<vector<int>>res;
    int n=nums.size();
    for(int i=0;i<n-3;i++){
        if(i>0 && nums[i]==nums[i-1])continue;
        for(int j=i+1;j<n-2;j++){
            if(j>i+1 && nums[j]==nums[j-1])continue;
            int l=j+1;
            int r=n-1;
            while(l<r){
                int sum=nums[i]+nums[j]+nums[l]+nums[r];
                if(sum==target){
                    res.push_back({nums[i],nums[j],nums[l],nums[r]});
                    while(l<r && nums[l]==nums[l+1])l++;
                    while(l<r && nums[r]==nums[r-1])r--;
                    l++;
                    r--;
                }else if(sum<target){
                    l++;
                }else{
                    r--;
                }
            }
        }
    }
    return res;
}