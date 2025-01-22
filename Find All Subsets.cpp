//  Find All Subsets
// Moderate
// 80/80
// Average time to solve is 15m
// Contributed by
// 26 upvotes
// Asked in companies
// Problem statement
// You are given an array 'arr' of 'N' distinct integers. Your task is to find all the non-empty subsets of the array.



// Note: You can return the subsets in any order, you don’t have to specifically sort them.



// Example:
// arr=[3,4,5]
// subsets ={3}, {3,4}, {3,4,5}, {3,5}, {4}, {4,5}, {5}
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 3
// 1 2 3
// Sample Output 1 :
// 1
// 1 2
// 1 2 3
// 1 3
// 2
// 2 3
// 3
// Explanation Of Sample Output 1 :
// Total 7 possible subsets can be formed: {1}, {1,2}, {1,2,3}, {1,3}, {2}, {2,3}, {3}
// Sample Input 2 :
// 2
// 1 2
// Sample Output 2 :
// 1 
// 1 2 
// 2 
// Constraints :
// 1 <= N <= 10
// -10^9 <= arr[i] <= 10^9

// Time limit: 1 sec

void generate(vector<int>& arr,int idx,vector<vector<int>>& res,vector<int>curr){
    res.push_back(curr);
    for(int i=idx;i<arr.size();i++){
        curr.push_back(arr[i]);
        generate(arr,i+1,res,curr);
        curr.pop_back();
    }
}
vector<vector<int>> FindAllSubsets(vector<int> &arr){
    //  write your code here.
    vector<vector<int>>res; 
    vector<int>curr;
    generate(arr,0,res,curr);
    return res;
}