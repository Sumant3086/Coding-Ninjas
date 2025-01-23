// You want to make all the characters of the string equal to 'a'. Determine the minimum length of the substring you have to choose to make all characters 'a'. You can also choose a substring with a '0' length, which doesn't update any characters.

// Example:
// N = 5
// S = 'ababa'
// You can select the substring from 'S[1]' to 'S[3]', so string 'S' is 'aaaaa'.
// It can be proved that you cannot make all the characters 'a' by choosing a substring of length less than '3'.
// So, the answer for this case is '3'.

// Constraints:
// 1 <= 'T' <= 10
// 1 <= 'N' <= 10^5
// 'a' <= 'S[i]' <= 'b'

// Time limit: 1 sec

// Sample input 1:
// 2
// 5
// aaaaa
// 2
// bb

int minimumLength(int n, string &s) {
    // Write your code here.
    int l=0;
    int r=n-1;
    while(l<r && s[l]!='b'){
        l++;
    }
    while(r>=0 && s[r]!='b'){
        r--;
    }
    if(l>r){
        return 0;
    }
    return r-l+1; 
}