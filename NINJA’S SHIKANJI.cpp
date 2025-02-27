// NINJA’S SHIKANJI
// Easy
// 0/40
// Average time to solve is 15m
// Contributed by
// Asked in companies
// Problem statement
// Ninja opened a shikanji’s stall to earn a living for him. In his stall, each shikanji drinks cost ‘5$’. Customers are standing in the form queue and each customer either pays ‘5$, 10$, 20$ ‘ so now Ninja has to give them change so that each customer exactly pays ‘5$’.

// So now help the ninja to find out whether he is able to charge exactly ‘5$’ from each customer by providing them the change.

// So your task is to write a code to check whether ninja can provide change to the customer if they paid extra to him. You will be provided with the ‘BILL_ARR’ array denoting the amount paid by each customer you have to return ‘True’ if it is possible else you have to return ‘False’.

// Example:

// Suppose given ‘BILL_ARR’ array is { 5, 5, 5, 10, 20 } so we return ‘True’ for this test case as from first ‘3’ customers we take ‘5$’ from each customer then ‘4th’ customer give ‘10$’ we give him ‘5$’ back now we have ‘2’, ‘5$’ note and ‘1’, ‘10$’ note than ‘5th’ customer give ‘20$’ so we give him back one ‘10$’ and one ‘5$’ note.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 2
// 5
// 5 10 5 20 5
// 4
// 5 20 5 10
// Sample Output 1:
// True
// False
// Explanation For Sample Input 1:
// Test Case 1:
// For the first test case given ‘BILL_ARR’ is { 5, 10, 5, 20, 5 } so we print ‘True’ as we take ‘5$’ from the first customer then ‘2nd’ customer gives us ‘10$’ we give him back ‘5$’ then ‘3rd’ customer give use ‘5$’ then ‘4th’ customer give us ‘20$’ now we give him back one ‘5$’ note and one ‘10$’ note.

// Test Case 2:
// For the second test case given ‘BILL_ARR’ is { 5, 20, 5, 10 } so we print ‘False’ as from the first customer we take ‘5$’ note than ‘2nd’ customer give us ‘20$’ note and we don’t have required change.
// Sample Input 2 :
// 2
// 3
// 5 10 20
// 7
// 5 5 10 5 5 20 10
// Sample Output 2 :
// False
// True
// Explanation For Sample Input 2:
// Test Case 1:
// For the first test case given ‘BILL_ARR’ is { 5, 10, 20} so we print ‘False’ as we take ‘5$’ from the first customer then ‘2nd’ customer gives us ‘10$’ we give him back ‘5$’ then ‘3rd’ customer give use ‘20$’ but we will not be able to give him change back.

// Test Case 2:
// For the second test case given ‘BILL_ARR’ is { 5, 5, 10, 5, 5, 20, 10 } so we print ‘True’ as every transaction is possible.


#include <bits/stdc++.h> 
bool ninjaShikanji(vector<int> bill, int n) {
	// Write your code here.
	int five=0,ten=0;
	for(int b:bill){
		if(b==5){
			five++;
		}else if(b==10){
			if(five>0){
				five--;
				ten++;
			}else{
				return false;
			}
		}else if(b==20){
			if(ten>0 && five>0){
				ten--;
				five--;
			}else if(five>=3){
				five-=3;
			}else{
				return false;
			}
		}
	}
	return true;
}
