// Rotate array
// Send Feedback
// You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).
//  Note:
// Change in the input array/list itself. You don't need to return or print the elements.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.

// Third line contains the value of 'D' by which the array/list needs to be rotated.
// Output Format :
// For each test case, print the rotated array/list in a row separated by a single space.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^4
// 0 <= N <= 10^6
// 0 <= D <= N
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 1 2 3 4 5 6 7
// 2
// Sample Output 1:
// 3 4 5 6 7 1 2
// Sample Input 2:
// 2
// 7
// 1 2 3 4 5 6 7
// 0
// 4
// 1 2 3 4
// 2
// Sample Output 2:
// 1 2 3 4 5 6 7
// 3 4 1 2


// void leftRotatebyOne(int *input, int n)
// {
//     int temp = input[0];
//     for (int i = 0; i < n - 1; i++)
//         input[i] = input[i + 1];
 
//     input[n-1] = temp;
// }

// void rotate(int *input, int d, int n)
// {
//     //Write your code here
//    for (int i = 0; i < d; i++)
//         leftRotatebyOne(input, n);
// }



void rvereseArray(int *input, int start, int end)
{
    if (start >= end)
    return;
     
    int temp = input[start];
    input[start] = input[end];
    input[end] = temp;
     
    // Recursive Function calling
    rvereseArray(input, start + 1, end - 1);
}  


void rotate(int *input, int d, int n){
    
    rvereseArray(input,0,n);
    
    rvereseArray(input,0,n-d);
    
    rvereseArray(input,n-d,n);
    
    
    
    
}
