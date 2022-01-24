// Return Keypad Code
// Send Feedback
// Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
// Return empty string for numbers 0 and 1.
// Note : 1. The order of strings are not important.
// 2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.
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

#include <string>
using namespace std;



const string str[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

int keypad(int num, string output[]){
    
    if(num<=1){
        output[0]="";
        return 1;
    }
    
    string temp[1000];
    int k=0;
    int smallOutput = keypad(num/10,temp);
    int n = num%10; // Last digit
    
    for(int i=0;i<str[n].size();i++){
        for(int j=0;j<smallOutput;j++){
            //output[k] = str[i] + temp[j];
            output[k] = temp[j] + str[n][i];
            
            k++;
        }
    }
    return k;  
}