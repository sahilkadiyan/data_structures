// Print all Codes - String
// Send Feedback
// Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to print the list of all possible codes that can be generated from the given string.
// Note : The order of codes are not important. Just print them in different lines.
// Input format :
// A numeric string S
// Output Format :
// All possible codes in different lines
// Constraints :
// 1 <= Length of String S <= 10
// Sample Input:
// 1123
// Sample Output:
// aabc
// kbc
// alc
// aaw
// kw


#include <cstring>
using namespace std;
void helper(string input,string output){
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    
    
    int first=input[0]-48;
    char firstChar=first+'a'-1;

    
    helper(input.substr(1),output + firstChar);
  // if(input[1]!='\0'){
       int second=first*10+input[1]-48;
       if(second>=10 && second<=26){
           char secondChar=second+'a'-1;
       helper(input.substr(2),output + secondChar);
       }
 
}

void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    helper(input,"");
    
}

