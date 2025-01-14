//  Rectangles In N x N Board
// Moderate
// 0/80
// Average time to solve is 20m
// Contributed by
// Asked in companies
// Problem statement
// You are given a positive integer N. Your task is to find the number of possible rectangles, excluding squares, in a N x N chessboard.

// Example:
// Let’s assume that we have a chessboard of dimension 4x4, i.e. N = 4. Then the rectangles can have the following possible dimensions: {1*2, 1*3, 1*4, 2*1, ……, 2*4, ………,4*4}. So, the total number of rectangles in the chessboard is 70.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10 
// 1 <= N <= 5 * 10^4

// Time Limit: 1 sec
// Sample Input 1:
// 2
// 4
// 1
// Sample Output 1:
// 70
// 0
// Explanation For Sample Input 1:
// For the first test case refer to the example explained above.

// For the second test case we have, a chessboard of dimension 1x1, i.e. N = 1. There are no possible rectangles. Hence, the answer is zero.
// Sample Input 2:
// 2
// 2
// 5
// Sample Output 2:
// 4
// 170
// C++ (g++ 11)
// 00
//  : 
// 05
//  : 
// 28
// 12345678
// int countRectangles(int n)
// {
// 	// Write your code here
// 	long long totalRec=(long long)(n*(n+1)/2); //for hor and ver
// 	totalRec*=totalRec;
// 	long long totalSq=(long long)(n*(n+1)*(2*n+1)/6);//sum of 1 to n^2
// 	return totalRec-totalSq;
// }
// Last saved at 10:18 PM
// Sample test case
// Custom test case




int countRectangles(int n)
{
	// Write your code here
	long long totalRec=(long long)(n*(n+1)/2); //for hor and ver
	totalRec*=totalRec;
	long long totalSq=(long long)(n*(n+1)*(2*n+1)/6);//sum of 1 to n^2
	return totalRec-totalSq;
}