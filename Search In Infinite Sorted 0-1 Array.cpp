//  Search In Infinite Sorted 0-1 Array
// Easy
// 40/40
// Average time to solve is 10m
// 33 upvotes
// Asked in companies
// Problem statement
// You are given an infinite array consisting of only ones and zeroes, in sorted order. You have to find the index of the first occurrence of 1.

// Example:
// If the array is 0 0 0 0 1 1 1 1… then, the first occurrence of 1 will be at index 4 therefore the answer here is 4.
// Note:
// As the array size is infinite, the actual array won’t be given to you. Instead, you will be able to access the array elements by calling a method named ‘get’.

// get(i) : returns the value present at index I.

// Indexing is 0-based. 

// Instead of representing an infinite array in the input, we give the index of the first occurrence of 1 in the input itself. However, this input will be completely hidden from the user.

// It is guaranteed that the answer will fit in a 64-bit integer.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 0 <= ARR[i] <= 1

// Time limit: 1sec
// Sample Input 1:
// 10
// Sample Output 1:
// 10
// Sample Input 2:
// 1
// Sample Output 2:
// 1


/************************************************************

    Use get function that returns the value at index i
    in the infinite sorted binary array.

    get(i)
    {

    }
    

************************************************************/

long long firstOne()
{
    
    // Write your code here. 
    long long start=0;
    long long end=1;
    while(get(end)==0){
        start=end;
        end*=2;
    }
    long long ans=-1;
    while(start<=end){ 
        long long mid=(start+end)/2;
        if(get(mid)==1){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
        return ans;
}
