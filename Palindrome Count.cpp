// Problem statement
// Ninja loves to play with strings and anagrams. A palindrome is a string that is read the same backward or forward. An anagram is a string that is formed by rearranging the characters of the string. Ninjas have been given a string ‘STR’, and asked to find the number of substrings whose anagram is palindromic.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 10
// 1 <= |STR| <= 5*10^3
// The string ‘STR’ contains small letters only.   

// Time Limit : 1 sec
// Sample Input 1 :
// 2
// aa
// abc
// Sample Output 1 :
// 3
// 3
// Explanation For Sample Input 1 :
// For first test case :

// Substring are: {a, a, aa}
// Since, all the substrings are palindromes.
// So, the result is 3.

// For second test :

// Substring are: {a, b, c, ab, bc, abc}
// Since, all {a, b, c} are palindromes. And no anagram of {ab, bc, abc} have palindromes. 
// So, the result is 3.
// Sample Input 2 :
// 2
// aaa
// aab
// Sample Output 2 :
// 6
// 5
// C++ (g++ 11)
// 00
//  : 
// 00
//  : 
// 55
// 123
// int palinCount(string str) {
//     // Write your code here.
// }


int palinCount(string str) {
    // Write your code here.
    int n=str.size();
    unordered_map<int,int>freq;
    freq[0]=1;
    int count=0;
    int mask=0;
    for(int i=0;i<n;i++){
        mask^=(1<<(str[i]-'a'));
        count+=freq[mask];
        for(int i=0;i<26;i++){
            int modified=mask^(1<<i);
            count+=freq[modified];
        }
        freq[mask]++;
    }
    return count;
}