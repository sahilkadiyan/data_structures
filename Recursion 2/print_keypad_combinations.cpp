// Print Keypad Combinations Code
// Send Feedback
// Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
// Note : The order of strings are not important. Just print different strings in new lines.
// Input Format :
// Integer n
// Output Format :
// All possible strings in different lines
// Constraints :
// 1 <= n <= 10^6
// Sample Input:
// 23
// Sample Output:
// ad
// ae
// af
// bd
// be
// bf
// cd
// ce
// cf

#include <iostream>
#include <string>
using namespace std;

string combinations(int num){
    string s[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string variable=s[num];
    return variable;
    
}
void helper(int num,string output){
     if(num==0){
        cout<<output<<endl;
        return;}
         
          string x=combinations(num%10);
    for(int i=0;i<x.size();i++){
        helper(num/10,x[i]+output);
        
    }
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    helper(num,"");
    
    
    
}
