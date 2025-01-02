// Problem statement
// You have a bookshelf in the form of an array ‘arr’ in which names of the books(single word name) are given. You are also given names of two books, ‘book1’ and ‘book2’. You are supposed to find the minimum distance between ‘book1’ and ‘book2’.

// Distance between two books is defined as the absolute difference between the indices of the books i.e for two books at index 'i' and 'j' the distance is equal to |i-j|.

// Note:

// 1. There may be multiple occurrences of any book.

// 2. book1 and book2 are present on the bookshelf.

// 3. The name of the books is in lower-case.

// 4. book1 is not equal to book2.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1<= T <= 50
// 2 <= N <= 10^4
// 1 <= arr[i].length <= 10^4
// All strings consist of lowercase letters only.

// Where ’T’ is the number of test cases, and N denotes the number of elements in the array ‘arr’, arr[i] denotes the element at index ‘i’.

// Time Limit: 1 sec
// Sample Input 1:
// 2
// 8
// coding ninjas help to crack product based companies
// coding product
// 8
// eat code sleep repeat eat code sleep repeat 
// eat repeat
// Sample Output 1:
// 5
// 1
// Explanation for Sample Input 1:
// In the first test case, there are 8 books on the bookshelf.
// book1 = “coding”, book2 = “product”. The distance between book1 and book2 is 5. So, the answer is 5.
// In the second test case, there are 8 books on the bookshelf. and there are 2 occurrences in every book.
// book1 = “eat”, book2 = “repeat”.  book1 is present at indices 0 and 4. book2 is present at indices 3 and 7. The distances are 3, 7, 1, 4. The minimum of these is 1. So, the answer is 1.
// Sample Input 2:
// 2
// 5
// alpha beta gamma theta beta
// theta beta
// 6
// be cool whatever the situation is
// situation cool
// Sample Output 2:
// 1
// 3
// C++ (g++ 5.4)

#include <bits/stdc++.h> 
int minimumDistance(vector<string> &arr, string book1, string book2) {
  	// Write your code here.
	  int idx1=-1;
	  int idx2=-1;
	  int minD=INT_MAX;
	  for(int i=0;i<arr.size();i++){
		  if(arr[i]==book1){
			  idx1=i;
		  }else if(arr[i]==book2){
			  idx2=i;
		  }
		  if(idx1!=-1 && idx2!=-1){
			  minD=min(minD,abs(idx1-idx2));
		  }
	  }
	  return minD;
}