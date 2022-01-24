// String to Integer
// Send Feedback
// Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
// Input format :
// Numeric string S (string, Eg. "1234")
// Output format :
// Corresponding integer N (int, Eg. 1234)
// Constraints :
// 0 <= |S| <= 9
// where |S| represents length of string S.
// Sample Input 1 :
// 00001231
// Sample Output 1 :
// 1231
// Sample Input 2 :
// 12567
// Sample Output 2 :
// 12567


#include<cstring>
int helper(char input[],int end){
  	if(end==0) 
        return input[end]-'0';
    
    int a=helper(input,end-1);
	int b=input[end]-'0';
    
    return a*10 +b;
}
int stringToNumber(char input[]) {
    // Write your code here
//int start=0;
    
    int length=strlen(input);
    int a=helper(input,length-1);
    return a;
}


