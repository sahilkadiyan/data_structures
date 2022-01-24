// Pair Star
// Send Feedback
// Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
// Input format :
// String S
// Output format :
// Modified string
// Constraints :
// 0 <= |S| <= 1000
// where |S| represents length of string S.
// Sample Input 1 :
// hello
// Sample Output 1:
// hel*lo
// Sample Input 2 :
// aaaa
// Sample Output 2 :
// a*a*a*a


// Change in the given string itself. So no need to return or print the changed string.
#include<cstring>
void pairStar(char input[]) {
    // Write your code here
    int start =0;
    int length=strlen(input);
    if(length==0) return ;
    pairStar(input+1);
    if(input[0]==input[1]){
        int length=strlen(input);              // added int length=strlen(input);
        input[length+1]='\0';
    for(int i=length-1;i>start;i--){           // changed i>start + 1 to i>start

        input[i+1]=input[i];
    }
        input[start+1]='*';
    }
    

}
