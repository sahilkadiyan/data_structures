// Quick Sort Code
// Send Feedback
// Sort an array A using Quick Sort.
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
// 1 5 2 7 3
// Sample Output 2 :
// 1 2 3 5 7 

/*
	To apply the method explained in the hint video, we have to add two more parameters in the function call. This can be done by calling a helper function from given function. The helper function can have three parameters: array, start index, end index.  
	
	Skeleton code to achieve this:
	#include <iostream>
	using namespace std;
	
	void quickSort(int input[], int start, int end)
	{
    		// your code goes here 
	}
	void quickSort(int input[], int size)
	{
    		quickSort(input, 0, size - 1);
	}
		
*/

/*void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}*/

int partition(int input[],int start,int end){
    
    // int count=0;
    // for(int i=start;i<=end;i++){
    //     if(input[start]>=input[i]){
    //         count++;
    //     }
    //     else{
    //         int temp=input[start];
    //         input[start]=input[start+count+1];
    //         input[start+count+1]=temp;
    //     }
    // }
    // //input[start]=input[start+count];
    // int c=start+count+1;
    // int i=start;
    // int j=end;
    // while(i<=c-1 && j>=c+1){
    //     if(input[i]>input[j]){
    //         int temp=input[j];
    //         input[j]=input[i];
    //         input[i]=temp;
    //         i++;
    //         j--;
    //     }
    //     else{
    //         i++;
    //         j--;
    //     }
    // }
    // return c;
    int ele = input[start];
    int c=0;
    for(int i=start+1;i<=end;i++)
    {
        if(input[i]<=ele)
            c++;
    }
    int pi=start+c;
    int temp = input[start];
    input[start]=input[pi];
    input[pi]=temp;
    
    int i=start,j=end;
    while(i<pi && j>=pi)
    {
        if(input[i]<=input[pi]){
            i++;
        }
        else if(input[j]>input[pi]){
            j--;
        }
        else{
            int temp = input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j--;
        }
    }
    return pi;    
}
void quickSortHelper(int input[],int start,int end){
    if(start>=end){
        return;
    }
    int c=partition(input,start,end);
    quickSortHelper(input,start,c-1);
    quickSortHelper(input,c+1,end);
    
}
void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    //base case
    if(size==0 || size==1){
        return ;
    }
    quickSortHelper(input,0,size-1);
    return;
}