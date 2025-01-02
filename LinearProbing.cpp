// Linear Probing
// Easy
// 40/40
// Average time to solve is 15m
// Asked in companies
// Problem statement
// ‘Hashing’ is a technique in which a large non-negative integer is mapped with a smaller non-negative integer using a function called ‘hash function’. Hash Table is the table in which we store large numbers corresponding to mapped indices.

// While hashing a list of elements, we define ‘Collision’ as a situation when the hash function for a large integer in list returns an index which is already mapped with some other large integer in a list.

// ‘Linear Probing’ is a collision handling technique in which we find the next vacant place in the hash table for mapping. What we do is that we take the original hash value and successively add 1 in each iteration until an unmapped index is found in the hash table.

// Given an array KEYS consisting of N non-negative integers. For each element in a given array, you need to determine the index by which this element is mapped in the hash table if the ‘Linear Probing’ technique is used to handle collision.

// The hash function you need to consider is H(X) = X mod N i.e. index = X mod N.

// Return an array ‘HASH_TABLE’ of size N in which:

// HASH_TABLE[ i ] = KEYS[ j ] where, i = KEYS[ j ] mod N.

// In short, an element at index ‘i’ is the element from the given array KEYS which is mapped to that index.

// You can refer to the example given below:


// The answer for the above example will be [18, 21, 6, 15].

// Note:

// 1. Consider ‘0’ based indexing.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 1 <= N <= 500
// 0 <= KEYS[ i ] <= 10^9

// Time limit: 1 sec
// Sample Input 1:
// 2
// 5
// 5 3 2 6 4
// 4
// 1 5 3 7
// Sample Output 1:
// 5 6 2 3 4
// 7 1 5 3
// Explanation
// For test case 1:
// H(X) = X mod 5
// All the numbers have unique hash values so there is no collision. Just map each index to its hash index.

// For test case 2:
// H(1) = 1L index 1 is unoccupied so we will map index 1 with 1.
// H(5) = 1: but, index 1 is occupied, so, we will use index 2 which is unoccupied, and will map index 2 with 5.
// H(3) = 3: index 3 is unoccupied so we will map index 3 with 3.
// H(7) = 3, but index 3 is occupied so we will use index 0 which is unoccupied and will map index 0 with 7.
// Sample Input 2:
// 2
// 6
// 4 7 8 1 2 5
// 3
// 6 7 10
// Sample Output 2:
// 5 7 8 1 4 2
// 6 7 10

#include <bits/stdc++.h> 
vector<int> linearProbing(vector<int> keys)
{
    // Write your code here.
    int N=keys.size();
    vector<int>hashTable(N,-1);
    for(int key:keys){
        int hashIndex=key%N;
        while(hashTable[hashIndex]!=-1){
            hashIndex=(hashIndex+1)%N;
        }
        hashTable[hashIndex]=key;
    }
    return hashTable;
}
