//  Reverse Words In A String
// Easy
// 0/40
// Average time to solve is 10m
// Contributed by
// Asked in companies
// Problem statement
// You are given a string 'str' of length 'N'.



// Your task is to reverse the original string word by word.



// There can be multiple spaces between two words and there can be leading or trailing spaces but in the output reversed string you need to put a single space between two words, and your reversed string should not contain leading or trailing spaces.



// Example :
// If the given input string is "Welcome to Coding Ninjas", then you should return "Ninjas Coding to Welcome" as the reversed string has only a single space between two words and there is no leading or trailing space.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// Welcome to Coding Ninjas
// Sample Output 1:
// Ninjas Coding to Welcome
// Explanation For Sample Input 1:
// You need to reduce multiple spaces between two words to a single space in the reversed string and observe how the multiple spaces, leading and trailing spaces have been removed.
// Sample Input 2 :
// I am a star
// Sample Output 2:
// star a am I
// Explanation For Sample Input 2:
// Your reversed string should not contain leading or trailing spaces.
// Constraints :
// 0 <= N <= 10^5

// Time Limit: 1 sec
// Follow-up:
// If the string data type is mutable in your language, can you solve it in place with O(1) extra space?



string reverseString(string &s){
	// Write your code here.
	int n=s.size();
	string ans="";	
	int i=0;
	while(i<n){
		string temp="";
		while(s[i]==' ' && i<n){
			i++;
		}
		while(s[i]!=' ' && i<n){
			temp+=s[i];
			i++;
		}
		if(temp.size()>0){
			if(ans.size()==0){
				ans=temp;
			}else{
				ans=temp+" "+ans;
			}
		}
	}
	return ans;
}