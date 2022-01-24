// Merge Sort Code
// Send Feedback
// Sort an array A using Merge Sort.
// Change in the input array itself. So no need to return or print anything.
// Input format :
// Line 1 : Integer n i.e. Array size
// Line 2 : Array elements (separated by space)
// Output format :
// Array elements in increasing order (separated by space)
// Constraints :
// 1 <= n <= 10^3
// Sample Input 1 :
// 6 
// 2 6 8 5 4 3
// Sample Output 1 :
// 2 3 4 5 6 8
// Sample Input 2 :
// 5
// 2 1 5 2 3
// Sample Output 2 :
// 1 2 2 3 5 

#include<cstring>
void mergeSortHelper(int input[], int start,int end){
    //base case
    int temp[end - start + 1];  //temp array 
     int mid=(start+end)/2;
    int i = start, j = mid+1, k = 0;
    if(start>=end){
        return ;
    }
   
    mergeSortHelper(input,start,mid);
    mergeSortHelper(input,mid+1,end);
    
    
    while(i <= mid && j <= end) {
		if(input[i] <= input[j]) {
			temp[k] = input[i];
			k += 1;
            i += 1;
		}
		else {
			temp[k] = input[j];
			k += 1;
            j += 1;
		}
	}
    
    
    while(i <= mid) {
		temp[k] = input[i];
		k += 1; 
        i += 1;
	}
    
    
    
    while(j <= end) {
		temp[k] = input[j];
		k += 1;
        j += 1;
	}
    
    
    
    for(i = start; i <= end; i += 1) {
		input[i] = temp[i - start];
	}
    
    
    
    
    
    
}
void mergeSort(int input[], int size){
	// Write your code here
    if(size==0 || size==1)
        return ;
    mergeSortHelper(input,0,size-1);
        
}
