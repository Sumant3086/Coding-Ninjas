//  Print All Subsets
// Easy
// 40/40
// Average time to solve is 20m
// Contributed by
// 23 upvotes
// Asked in companies
// Problem statement
// You are given an array ‘arr’ of ‘N’ distinct integers. Your task is to print all the non-empty subsets of the array.

// Note: elements inside each subset should be sorted in increasing order. But you can print the subsets in any order, you don’t have to specifically sort them.

 

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 10      
// 1 <= N <= 10
// 10^-9 <= arr[i] <= 10^9

// Time limit: 1 sec
// Sample Input 1 :
// 2
// 3
// 1 2 3
// 1
// 10
// Sample Output 1 :
// 1
// 1 2
// 1 2 3
// 1 3
// 2
// 2 3
// 3
// 10
// Explanation Of Sample Output 1 :
// For test case 1 :
// Total 7 possible subsets can be formed: {1}, {1,2}, {1,2,3}, {1,3}, {2}, {2,3}, {3}

// For test case 2 :
// Only a single subset {10} is possible for the given input array.
// Sample Input 2 :
// 2
// 2
// 1 2
// 3
// 1 2 3
// Sample Output 2 :
// 1 
// 1 2 
// 2 
// 1 
// 1 2 
// 1 2 3 
// 1 3 
// 2 
// 2 3 
// 3 

void solve(vector<int> arr, vector<int> output, int index, int n){
    if(index >= n){
        for(int i = 0; i < output.size(); i++){
            cout << output[i] << " ";
        }
        cout << endl;
        return;
    }
    solve(arr, output, index+1, n);
    output.push_back(arr[index]);
    solve(arr, output, index+1, n);
}
void printAllSubsets(int n, vector<int> &arr){
    vector<int> output;
    int index  = 0;
    solve(arr, output, index, n);
}