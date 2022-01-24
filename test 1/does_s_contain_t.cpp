// Does s contain t ?
// Send Feedback
// Given two string s and t, write a function to check if s contains all characters of t (in the same order as they are in string t).
// Return true or false.
// Do it recursively.
// E.g. : s = “abchjsgsuohhdhyrikkknddg” contains all characters of t=”coding” in the same order. So function will return true.
// Input Format :
// Line 1 : String s
// Line 2 : String t
// Output Format :
// true or false
// Sample Input 1 :
// abchjsgsuohhdhyrikkknddg
// coding
// Sample Output 1 :
// true
// Sample Input 2 :
// abcde
// aeb
// Sample Output 2 :
// false


#include<cstring>
bool checksequenece(char large[] , char*small) {
int a=strlen(large);
    int b=strlen(small);
    if(b==0)
        return true;
    if(a==0)
        return false;
    if(large[0]==small[0]){
       return checksequenece(large+1,small+1);
        
    }
    else
        return checksequenece(large+1,small);
}