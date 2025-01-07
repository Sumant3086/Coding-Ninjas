// Pair with given sum in a sorted array
// Difficulty: EasyAccuracy: 26.04%Submissions: 65K+Points: 2
// You are given an integer target and an array arr[]. You have to find number of pairs in arr[] which sums up to target. It is given that the elements of the arr[] are in sorted order.
// Note: pairs should have elements of distinct indexes. 

// Examples :

// Input: arr[] = [-1, 1, 5, 5, 7], target = 6
// Output: 3
// Explanation: There are 3 pairs which sum up to 6 : {1, 5}, {1, 5} and {-1, 7}.
// Input: arr[] = [1, 1, 1, 1], target = 2
// Output: 6
// Explanation: There are 6 pairs which sum up to 2 : {1, 1}, {1, 1}, {1, 1}, {1, 1}, {1, 1} and {1, 1}.
// Input: arr[] = [-1, 10, 10, 12, 15], target = 125
// Output: 0
// Explanation: There is no such pair which sums up to 4.
// Constraints:
// -105 <= target <=105
//  2 <= arr.size() <= 105
// -105 <= arr[i] <= 105

// Company Tags
// Adobe
// Topic Tags
// Related Articles
// Expected Complexities
// If you are facin

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        unordered_map<int,int>mp;
        int res=0;
        for(int i:arr){
            int sum=target-i;
            if(mp[sum]>0){
                res+=mp[sum];
            }
            mp[i]++;
        }
        return res;
    }
};

// class Solution {
//   public:
//     int countPairs(vector<int> &arr, int target) {
//         // Complete the function
//         int count=0;
//         int n=arr.size();
//         int left=0;
//         int right=n-1;
//         while(left<right){
//             int sum=arr[left]+arr[right];
//             if(sum==target){
//                 if(arr[left]==arr[right]){
//                     int pairs=right-left+1;
//                     count+=pairs*(pairs-1)/2;
//                     break;
//                 }else{
//                     int leftC=1;
//                     int rightC=1;
//                     while(left+1<right && arr[left]==arr[left+1]){
//                         leftC++;
//                         left++;
//                     }
//                     while(right-1>left && arr[right]==arr[right-1]){
//                         rightC++;
//                         right--;
//                     }
//                     count+=leftC*rightC;
//                     left++;
//                     right--;
//                 }
//             }else if(sum<target){
//                 left++;
//             }else{
//                 right--;
//             }
//         }
//         return count;
//     }
// };