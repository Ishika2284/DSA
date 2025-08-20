
// ✅ Basics

// Definition: A string is a sequence of characters stored in contiguous memory.

// Mutability:

// C++: std::string is mutable.

// Common Operations:

// Length → s.length()

// Substring → s.substr(start, length)

// Concatenation → s1 + s2

// Comparison → == or compare()

// Reverse → reverse(s.begin(), s.end())

#include <iostream>
#include <string>
using namespace std;


int main(){
    string inp1 , inp2;

    cout<<"enter first string : ";
    cin>>inp1;
    cout<<"enter second string : ";
    cin>>inp2;

    if(inp1==inp2){
        cout<<"two strings provided are lexographically same!! ";
    }else{
        cout<<"they are not same";
    }

    return 0;

}

// 2) Create a program that takes a sentence as input and extracts and 
// prints the first three words as a substring.  Use the statement below ;  
// size_t thirdSpacePos = sentence.find(' ', sentence.find(' ', 
// sentence.find(' ') + 1) + 1); 

int main(){
    string input;
    cout<<"enter your string : ";
    getline(cin,input);

    size_t thirdSpacePos = input.find(' ', input.find(' ', input.find(' ') + 1) + 1);

    string final = input.substr(0,thirdSpacePos);

    cout<<"first three words as a substring are : "<<final;

}

// 3) Given a string containing the phrase "C++ is fun," write a program to 
// replace "fun" with "exciting" and print the modified string 

int main(){
    string str = "C++ is fun";

    string newStr = str.replace(7,3,"exciting");


    cout<<"replaced string is : "<<newStr;

    return 0;
}
// 4) Develop a program that concatenates two strings and prints the result. 
// Allow the user to input the strings. The strings must be printed, 
// seprated by a blank space. 

int main(){
    string inp1 , inp2;

    cout<<"enter first string : ";
    getline(cin,inp1);
    cout<<"enter second string : ";
    getline(cin,inp2);
    inp1.append(" ");
    string newstr = inp1.append(inp2);
    cout<<"concatenated string : "<<newstr;

    return 0;
}
// 5) Write a function that takes a string as an argument and returns the 
// length of the string without using the “length” or “size” member 
// functions.  You can use “while” loop 

int main(){
    int count = 0;

    string str;
    cout<<"enter the strings : ";
    getline(cin,str);

    while(str[count] != '\0'){
        count++;
    }
    cout<<"char in string is : "<<count;

    return 0;

}

//6. Reverse a String
int main() {
    string s = "hello";
    reverse(s.begin(), s.end());
    cout << s;  // "olleh"
}

//7. Check Palindrome
bool isPalindrome(string s) {
    int i = 0, j = s.size()-1;
    while(i < j) {
        if(s[i++] != s[j--]) return false;
    }
    return true;
}

//8. Check Anagram
bool isAnagram(string s, string t) {
    if(s.size() != t.size()) return false;
    vector<int> count(26, 0);
    for(char c : s) count[c-'a']++;
    for(char c : t) {
        if(--count[c-'a'] < 0) return false;
    }
    return true;
}

//9. Longest Common Prefix
string longestCommonPrefix(vector<string>& strs) {
    string prefix = strs[0];
    for(int i=1;i<strs.size();i++) {
        while(strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.size()-1);
            if(prefix.empty()) return "";
        }
    }
    return prefix;
}

//10. Subsequence Check
bool isSubsequence(string s, string t) {
    int i=0, j=0;
    while(i<s.size() && j<t.size()) {
        if(s[i]==t[j]) i++;
        j++;
    }
    return i==s.size();
}