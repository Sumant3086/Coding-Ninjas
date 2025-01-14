//  Box Stacking
// Hard
// 0/120
// Average time to solve is 25m
// Contributed by
// Asked in companies
// Problem statement
// You are given a set of ‘n’ types of rectangular 3-D boxes. The height, width, and length of each type of box are given by arrays, ‘height’, ‘width’, and ‘length’ respectively, each consisting of ‘n’ positive integers. The height, width, length of the i^th type box is given by ‘height[i]’, ‘width[i]’ and ‘length[i]’ respectively.

// You need to create a stack of boxes that is as tall as possible using the given set of boxes.

// Below are a few allowances:

// You can only stack a box on top of another box if the dimensions of the 2-D base of the lower box ( both length and width ) are strictly larger than those of the 2-D base of the higher box. 

// You can rotate a box so that any side functions as its base. It is also allowed to use multiple instances of the same type of box. This means, a single type of box when rotated, will generate multiple boxes with different dimensions, which may also be included in stack building.
// Return the height of the highest possible stack so formed.


// Note:
// The height, Width, Length of the type of box will interchange after rotation.

// No two boxes will have all three dimensions the same.

// Don’t print anything, just return the height of the highest possible stack that can be formed.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 50
// 1 <= n <= 10^2
// 1 <= height[i] <= 10^2
// 1 <= width[i] <= 10^2
// 1 <= length[i] <= 10^2

// Time limit: 1 second
// Sample Input 1:
// 2
// 2
// 1 2
// 2 4
// 3 6  
// 1
// 3
// 3
// 3
// Sample Output 1:
// 11 
// 3
// Explanation For Sample Output 1:
// Test case 1:
// The number of types of boxes, ‘n’ = 2 
// ‘height’ = {1, 2}
// ‘width’= {2, 6}
// ‘length’ = {3, 4}
// Let donate box in (Height, Width, Length) manner then, one way of placing the box in bottom to top manner is as follow:

// Place the box of the second type i.e box (2, 4, 6) in the bottom.

// Place the box of the second type after rotating i.e box (6, 2, 4) above the previous box.

// Place the box of the first type after rotating i.e box (3, 1, 2) above the previous box.

// Hence, the total height of the box stack is 2 + 6 + 3 = 11.

// No other combination of boxes produces a height greater than 11.

// Test case 2:
// There is only one type of box, with each of the dimensions equal to 3.

// Thus, the maximum height of the box stack will be 3.
// Sample Input 2:
// 2
// 2
// 1 2
// 1 2
// 1 2
// 4
// 4 1 4 10
// 6 2 5 12
// 7 3 6 32
// Sample Output 2:
//  3
//  60


#include <bits/stdc++.h> 
struct Box{
	int h,w,l;
	Box(int height,int width,int length):h(height),w(width),l(length){}
};
bool compare(Box &a,Box &b){
	return a.w*a.l>b.w*b.l;
}
int findMaxHeight(vector<int> &height, vector<int> &width, vector<int> &length, int n) {
 	// Write your code here
	vector<Box>boxes;
	for(int i=0;i<n;i++){
		boxes.push_back(Box(height[i],max(width[i],length[i]),min(width[i],length[i])));
		boxes.push_back(Box(width[i],max(height[i],length[i]),min(height[i],length[i])));
		boxes.push_back(Box(length[i],max(height[i],width[i]),min(width[i],height[i])));
	}	
	sort(boxes.begin(),boxes.end(),compare);
	int m=boxes.size(),maxH=0;
	vector<int>dp(m);
	for(int i=0;i<m;i++){
		dp[i]=boxes[i].h;
		for(int j=0;j<i;j++){
			if(boxes[i].w<boxes[j].w && boxes[i].l<boxes[j].l)
			dp[i]=max(dp[i],dp[j]+boxes[i].h);
		}
		maxH=max(maxH,dp[i]);
	}
	return maxH;
}