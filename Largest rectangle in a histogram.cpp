//  Largest rectangle in a histogram
// Hard
// 0/120
// Average time to solve is 25m
// Contributed by
// 148 upvotes
// Asked in companies
// Problem statement
// You have been given an array/list 'HEIGHTS' of length ‘N. 'HEIGHTS' represents the histogram and each element of 'HEIGHTS' represents the height of the histogram bar. Consider that the width of each histogram is 1.

// You are supposed to return the area of the largest rectangle possible in the given histogram.

// For example :
// In the below histogram where array/list elements are {2, 1, 5, 6, 2, 3}.

// The area of largest rectangle possible in the given histogram is 10.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 10
// 1 <= N <= 10^6
// 0 <= HEIGHTS[i] <= 10^9

// Where ‘T’ is the number of test cases.
// 'N' is the length of the given array/list.
// And, HEIGHTS[i] denotes the height of the 'ith' histogram bar.

// Time Limit: 1 sec.
// Sample Input 1 :
// 2
// 10
// 1 0 1 2 2 2 2 1 0 2 
// 10
// 1 2 1 0 1 1 0 0 2 2 
// Sample Output 1 :
// 8
// 4
// Explanation For Sample Input 1 :
// In the first test case, the area of the largest rectangle of the given histogram is 8 in the rectangle starting from index 4 to index 7 in the given array/list.

// In the second test case, the area of the largest rectangle of the given histogram is 4 in the rectangle starting from index 9 to index 10 in the given array/list.
// Sample Input 2 :
// 2
// 10
// 8 6 3 5 0 0 4 10 2 5 
// 10
// 6 1 8 10 5 7 0 4 5 8 
// Sample Output 2 :
// 12
// 20
// Explanation For Sample Input 2 :
// In the first test case, the area of the largest rectangle of the given histogram is 12.

// In the second test case, the area of the largest rectangle of the given histogram is 20.

 int largestRectangle(vector < int > & heights) {
   // Write your code here.
     if(heights.size()==0)return 0;
    heights.push_back(0);
    vector<int>stack{-1};
    int n=heights.size();
    int result=0;
    for(int i=0;i<n;++i){
      while(stack.size()>1 && heights[stack.back()]>=heights[i]){
        int k=stack.back();
        stack.pop_back();
        int w=i-stack.back()-1;
        int s=heights[k]*w;
        result=max(result,s);
      }
      stack.push_back(i);
    }
    return result;
 }