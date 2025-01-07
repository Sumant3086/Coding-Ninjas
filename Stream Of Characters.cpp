//  Stream Of Characters
// Hard
// 120/120
// Average time to solve is 50m
// Contributed by
// Asked in companies
// Problem statement
// You are given a list, ‘DICTIONARY[]’ containing a list of words and a stream of characters (queries). Your task is to choose a suitable data structure to implement ‘CharacterStreamChecker’ class described as follows:

// 1) ‘CharacterStreamChecker(dictionary)’: Constructor to initialize the data structure with given words present in ‘DICTIONARY[]’.

// 2) ‘solveQuery(character)’: Function to check whether the string formed by last ‘C’ (C >= 1) queried characters (in order from oldest to newest, including the character just queried) is present in the ‘DICTIONARY[]’. If yes, return true. Otherwise, return false.

// Note :

// The ‘DICTIONARY[]’ contains only distinct strings.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 2
// 4
// i am a ninja
// 9
// a a m n i n j a m
// 3
// mn p qrs 
// 7
// m n o p q r s
// Sample Output 1 :
// true true true false true false false true true
// false true false true false false true
// Explanation of Sample Output 1 :
// Test Case 1 :  
// Stream: ‘a’. String “a” is present in the ‘DICTIONARY’. Therefore, the output is true.
// Stream: ‘a’, ‘a’. String “a” is present in the ‘DICTIONARY’. Therefore, the output is true.
// Stream: ‘a’, ‘a’, ‘m’. String “am” is present in the ‘DICTIONARY’. Therefore, the output is true.
// Stream: ‘a’, ‘a’, ‘m’, ‘n’. No string out of “n”, “mn”, “amn” and “aamn” is present in the ‘DICTIONARY’. Therefore, the output is false.
// Stream: ‘a’, ‘a’, ‘m’, ‘n’, ‘i’. String “i” is present in the ‘DICTIONARY’. Therefore, the output is true.
// Stream: ‘a’, ‘a’, ‘m’, ‘n’, ‘i’, ‘n’. No string out of “n”, “in”, “nin”, “mnin”, “amnin” and “aamnin” is present in the ‘DICTIONARY’. Therefore, the output is false.
// Stream: ‘a’, ‘a’, ‘m’, ‘n’, ‘i’, ‘n’, ‘j’. No string out of “j”, “nj”, “inj”, “ninj”, “mninj”, “amninj” and “aamninj” is present in the ‘DICTIONARY’. Therefore, the output is false.
//  Stream: ‘a’, ‘a’, ‘m’, ‘n’, ‘i’, ‘n’, ‘j’, ‘a’. String “ninja” is present in the ‘DICTIONARY’. Therefore, the output is true.
// Stream: ‘a’, ‘a’, ‘m’, ‘n’, ‘i’, ‘n’, ‘j’, ‘a’, ‘m’. String “am” is present in the ‘DICTIONARY’. Therefore, the output is true.


// Test Case 2 : 
// Stream: ‘m’. String “m” is not present in the ‘DICTIONARY’. Therefore, the output is false.
// Stream: ‘m’, ‘n’. String “mn” is present in the ‘DICTIONARY’. Therefore, the output is true.
// Stream: ‘m’, ‘n’, ‘o’. No string out of “o”, “no”, and “mno” is present in the ‘DICTIONARY’. Therefore, the output is false.
// Stream: ‘m’, ‘n’, ‘o’, ‘p’. String “p” is present in the ‘DICTIONARY’. Therefore, the output is true.
// Stream: ‘m’, ‘n’, ‘o’, ‘p’, ‘q’. No string out of “q”, “pq”, “opq”, “nopq” and “mnopq” is present in the ‘DICTIONARY’. Therefore, the output is false.
// Stream: ‘m’, ‘n’, ‘o’, ‘p’, ‘q’, ‘r’. No string out of “r”, “qr”, “pqr”, “opqr”, “nopqr” and “mnopqr” is present in the ‘DICTIONARY’. Therefore, the output is false.
// Stream: ‘m’, ‘n’, ‘o’, ‘p’, ‘q’, ‘r’, ‘s’. String “qrs” is present in the ‘DICTIONARY’. Therefore, the output is true.
// Sample Input 2 :
// 2
// 5
// mnn nn nnnn nmmmm nmn
// 7
// n n n m n m n
// 4
// a aa ab abc
// 5
// c a b c a
// Sample Output 2 :
// false true true false true false true
// false true true true true
// C++ (g++ 11)
// 12345678910111213141516171819202122232425262728
// #include <bits/stdc++.h> 
// class TrieNode{
//     public:
//     unordered_map<char,TrieNode*>children;
//     bool isEndOfWord;
//     TrieNode(){
//         isEndOfWord=false;
//     }
// };
// class CharacterStreamChecker



#include <bits/stdc++.h> 
class TrieNode{
    public:
    unordered_map<char,TrieNode*>children;
    bool isEndOfWord;
    TrieNode(){
        isEndOfWord=false;
    }
};
class CharacterStreamChecker
{
    private:
    TrieNode* root;
    string curr;
public:
    CharacterStreamChecker(vector<string> &dictionary)
    {
        // Write your code here.
        root=new TrieNode();
        for(const string &word:dictionary){
            TrieNode* node=root;
            for(int i=word.size()-1;i>=0;i--){
                char c=word[i];
                if(node->children.find(c)==node->children.end()){
                    node->children[c]=new TrieNode();
                }
                node=node->children[c];
            }
            node->isEndOfWord=true;
        }
    }

    bool solveQuery(char character)
    {
        // Write your code here.
        curr+=character;
        TrieNode* node=root;
        for(int i=curr.size()-1;i>=0;i--){
            char c=curr[i];
            if(node->children.find(c)==node->children.end()){
                return false;
            }
            node=node->children[c];
            if(node->isEndOfWord){
                return true;
            }
        }
        return false;
    }
};