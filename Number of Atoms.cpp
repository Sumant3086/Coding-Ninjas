//  Number of Atoms
// Moderate
// 80/80
// Average time to solve is 50m
// 20 upvotes
// Asked in company
// Problem statement
// Given a string, representing a chemical formula, return the count of each atom.

// An atomic element always starts with an uppercase character, then zero or more lowercase letters follow, representing the name.

// One or more digits representing that element's count may follow if the count is greater than 1. If the count is 1, no digits will follow. For example, H2O and H2O2 are possible, but H1O2 is impossible.

// Two formulas can be concatenated together to produce another formula. For example, H2O2He3Mg4 is also a formula.

// A formula placed in parentheses, and a count (optionally added) is also a formula. For example, (H2O2) and (H2O2)3 are formulas.

// Given a formula, return the count of all elements as a string in the following form: the first name (in sorted order), followed by its count (if that count is more than 1), followed by the second name (in sorted order), followed by its count (if that count is more than 1), and so on.

// Note :
// The given formula consists of English alphabets, digits, ‘(‘ and ’)’.

// The given formula is always valid. 
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 1 <= |S| <= 10^4

// Time Limit: 1 sec
// Note :
// The count of each element in the formula will not exceed 2^31.
// Sample Input 1:
// 2
// H2O
// Mg(OH)2
// Sample Output 1:
// H2O
// H2MgO2
// Explanation of the Sample Input 1:
// The first formula contains two elements H and O, with their count as 2 and 1 respectively. Since the count of O is not greater than 1, it is printed as O only and H is printed as H2. 

// The second formula contains three elements : Mg, O and H. Mg has a count of 1 and since O and H are in parentheses followed by the digit 2, both have a count of 2. 
// Sample Input 2:
// 1
// K4(ON(SO3)2)2
// Sample Output 2:
// K4N2O14S4
// Explanation of Sample Input 2
// For the given formula, the elements are K, O, N and S. The count of K is 4, N is 2, O is 14 ( (1 + (3*2)) * 2 = 14) and that of S is 4 (2 * 2).
// Sample Input 3
// 1
// Be32
// Sample Output 3
// Be32

#include <iostream>
#include <stack>
#include <unordered_map>
#include <map>
#include <cctype>
#include <string>
using namespace std;
string countNumberOfAtoms(string s) {
    stack<unordered_map<string,int>>st;
    st.push(unordered_map<string,int>());
    int idx=0;
    while(idx<s.length()){
        if(s[idx]=='('){
            st.push(unordered_map<string,int>());
            idx++;
        }else if(s[idx]==')'){
            unordered_map<string,int>currMap=st.top();
            st.pop();
            idx++;
            string multiplier;
            while(idx<s.length() && isdigit(s[idx])){
                multiplier+=s[idx];
                idx++;
            }
            if(!multiplier.empty()){
                int mult=stoi(multiplier);
                for(auto& [atom,count]:currMap){
                    currMap[atom]=count*mult;
                }
            }
            for(auto& [atom,count]:currMap){
                st.top()[atom]+=count;
            }
        }else{
            string currAtom;
            currAtom+=s[idx++];
            while(idx<s.length() && islower(s[idx])){
                currAtom+=s[idx];
                idx++;
            }
            string currCount;
            while(idx<s.length() && isdigit(s[idx])){
                currCount+=s[idx];
                idx++;
            }
            int count=currCount.empty()?1:stoi(currCount);
            st.top()[currAtom]+=count;
        }
    }
    map<string,int>finalMap(st.top().begin(),st.top().end());
    string ans;
    for(auto& [atom,count]:finalMap){
        ans+=atom;
        if(count>1){
            ans+=to_string(count);
        }
    }
    return ans;
}