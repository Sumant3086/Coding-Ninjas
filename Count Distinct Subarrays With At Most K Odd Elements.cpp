// Count Distinct Subarrays With At Most K Odd Elements
// Moderate
// 0/80
// Average time to solve is 10m
// Asked in companies
// Problem statement
// You are given an array 'arr' of 'N' integers. Your task is to return the total number of distinct subarrays of 'arr' having 'k' odd elements.



// Example :
// If arr = [3,2,3], and k = 1 
// then there are 4 subarrays with 1 odd elements:
// [3], [3,2], [2,3] & [3].
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1
// 5 2
// 2 1 1 1 4
// Sample Output 1 :
// 4
// Explanation for sample input 1 :
// Following are 3 valid subarray:
// [2,1,1], [1,1], [1,1], [1,1,4].
// Sample Input 2 :
// 3 2
// 1 3 1
// Sample Output 2 :
// 2
// Constraints :
// 1 <= N <= 10^4
// 0 <= k <= N
// 1 <= arr[i] <= 10 ^ 5

// Time Limit: 1sec
// C++ (g++ 5.4)
// 01
//  : 
// 34
//  : 
// 47
// 123456789101112131415161718192021
// }
// Last saved at 11:15 PM
// Sample test case
// Custom test case




int distinctSubKOdds(vector<int> &arr, int k)
{
	// Write your code here
	unordered_map<int,int>mp;
	for(int i=0;i<arr.size();i++){
		if(arr[i]%2==0){
			arr[i]=0;
		}else{
			arr[i]=1;
		}
	}
	int count=0;
	mp[count]++;
	int sum=0;
	for(auto i:arr){
		sum+=i;
		count+=mp[sum-k];
		mp[sum]++;
	}
	return count;
}