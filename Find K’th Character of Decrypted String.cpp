//  Find K’th Character of Decrypted String
// Moderate
// 0/80
// Average time to solve is 33m
// Contributed by
// Asked in companies
// Problem statement
// You have been given an Encrypted String where repetitions of substrings are represented as substring followed by the count of substrings.

// Example: String "aabbbcdcdcd" will be encrypted as "a2b3cd3".
// You need to find the 'K'th character of Decrypted String. Decrypted String would have 1-based indexing.

// Note :

// Input string will always be lowercase characters without any spaces.

// If the count of a substring is 1 then also it will be followed by Integer '1'.
// Example: "aabcdee" will be Encrypted as "a2bcd1e2"
// This means it's guaranteed that each substring is followed by some Integer.

// Also, the frequency of encrypted substring can be of more than one digit. For example, in "ab12c3", ab is repeated 12 times. No leading 0 is present in the frequency of substring.

// The frequency of a repeated substring can also be in parts.
// Example: "aaaabbbb" can also have "a2a2b3b1" as Encrypted String.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// a2b3cd3
// 8
// Sample Output 1 :
// c
//  Explanation to Sample Input 1 :
// S = "a2b3cd3"
// Decrypted String of S = "aabbbcdcdcd"
// According to 1-based indexing for S, the 8th character is 'c'.
// Sample Input 2 :
// ab12c3
// 20
// Sample Output 2 :
// b
//  Explanation to Sample Input 2 :
// S = "ab12c3"
// Decrypted String of S = "ababababababababababababccc"
// So 20th character is 'b'.
// C++ (g++ 11)
// 00
//  : 
// 00
//  : 
// 20
// 1234
// char kThCharaterOfDecryptedString(string s, long long k)
// {
//     //  Write your code here.
// }


char kThCharaterOfDecryptedString(string s, long long k)
{
    //  Write your code here.
    string str="";
    long long curr=0;
    long long n=s.size();
    long long len=0;
    while(curr<n){
        string str;
        while(isalpha(s[curr]) && curr<n){
            str+=s[curr];
            curr++;
        }
        string countStr="";
        while(curr<n && isdigit(s[curr])){
            countStr+=s[curr];
            curr++;
        }
        long long repCount=stoll(countStr);
        long long segLen=str.size()*repCount;
        if(k<=segLen){
            return str[(k-1)%str.size()];
        }else{
            k-=segLen;
        }
    }
    return '\0';
}