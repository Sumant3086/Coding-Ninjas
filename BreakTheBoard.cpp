// Problem statement
// You’re given a board of length 'L' and width 'W'. Your task is to break this board into 'L' * 'W' smaller squares, such that the total cost involved in breaking is the minimum possible.

// NOTE:
// The breaking cost of each edge for the board will be given.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 2 <= L, W <= 10 ^ 4
// 1 <= costL[i], costW[i] <= 10 ^ 5

// Time Limit: 1 sec
// Sample Input 1:
// 1
// 3 3
// 1 2
// 2 1
// Sample Output 1:
// 11
// Explanation of Sample Input 1:
// Start by cutting the vertical column with cost = 2, hence cost becomes 2. Then make two cuts at the horizontal row with the cost = 2, Cost = 2*2 + 2 =6. Then vertically cut two columns with cost = 2, Cost = 6 + 1*2 = 8. Finally make three horizontal cuts with cost = 1. Final cost becomes 8 + 1*3 = 11.
// Sample Input 2:
// 1
// 2 2
// 2
// 1
// Sample Output 2:
// 4
// Explanation of Sample Input 2:
// In this case, we’ll be doing a total of 2 cuts. In the first cut, we’ll be cutting the first segment and our cost will now be 1*2 = 2 and in the second and the final cut, we’ll be cutting 2 segments each of cost one. Hence our final cost be 2 + 2*1 = 4.
// C++ (g++ 5.4)
// 5678911121013141516171819202122232425262827432930
// 	while(i<l-1 && j<w-1){
// 		if(row[i]>=column[j]){
// 			totCost+=row[i]*(verCuts);
// 			horCuts++;
// 			i++;
// 		}else{
// 			totCost+=column[j]*(horCuts);
// 			verCuts++;
// 			j++;
// 		}

// Last saved at 11:52 PM


#include <bits/stdc++.h> 
int minimumCost(vector<int> row, vector<int> column, int l, int w)
{
	// Write your code here
	sort(row.begin(),row.end(),greater<int>());
	sort(column.begin(),column.end(),greater<int>());
	int totCost=0;
	int horCuts=1;
	int verCuts=1;
	int i=0,j=0;
	while(i<l-1 && j<w-1){
		if(row[i]>=column[j]){
			totCost+=row[i]*(verCuts);
			horCuts++;
			i++;
		}else{
			totCost+=column[j]*(horCuts);
			verCuts++;
			j++;
		}
	}
	while(i<l-1){
			totCost+=row[i]*(verCuts);
			i++;		
	}
	while(j<w-1){
		totCost+=column[j]*(horCuts);
		j++;
	}
	return totCost;

}