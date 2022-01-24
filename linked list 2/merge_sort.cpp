// Code: Merge Sort
// Send Feedback
//  Given a singly linked list of integers, sort it using 'Merge Sort.'
// Note :
// No need to print the list, it has already been taken care. Only return the new head to the list.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// The first and the only line of each test case or query contains the elements of the singly linked list separated by a single space.
// Remember/Consider :
// While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
// Output format :
// For each test case/query, print the elements of the sorted singly linked list.

// Output for every test case will be printed in a seperate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= M <= 10^5
// Where M is the size of the singly linked list.

// Time Limit: 1sec
// Sample Input 1 :
// 1
// 10 9 8 7 6 5 4 3 -1
// Sample Output 1 :
//  3 4 5 6 7 8 9 10 
//  Sample Output 2 :
// 2
// -1
// 10 -5 9 90 5 67 1 89 -1
// Sample Output 2 :
// -5 1 5 9 10 67 89 90 




/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
Node *midpoint(Node *head){
    if(head==NULL || head -> next == NULL) return NULL;
    Node *slow=head;
    Node *fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}


Node *mergesorted(Node *head1,Node *head2){
    Node *fh=NULL;
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    if(head1->data<=head2->data){
        fh=head1;
        fh->next=mergesorted(head1->next,head2);
    }
    else{
        fh=head2;
        fh->next=mergesorted(head1,head2->next);
    }
    return fh;
}


Node *mergeSort(Node *head)
{
	//Write your code here
    if(head==NULL|| head -> next == NULL) return head;
//     Node *x=NULL;
//     Node *y=NULL;
//     Node *mid=midpoint(head);
//     while(head!=mid){
//         head=head->next;
//     Node *x=mergeSort(mid);
//     }
//     while(mid!=NULL){
//         mid=mid->next;
//     Node *y=mergeSort(mid->next);
//     }
    
//     Node *finalhead=mergesorted(x,y);
//     return finalhead;
    Node*head1 = head;
    Node *middle = midpoint(head);
    Node *head2 = middle -> next;
    middle -> next =NULL;
    head1 = mergeSort(head1);
    head2 = mergeSort(head2);
    mergesorted(head1,head2);
   
    
    
}