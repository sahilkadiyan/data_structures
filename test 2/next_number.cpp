// Next Number
// Send Feedback
// Given a large number represented in the form of a linked list. Write code to increment the number by 1 in-place(i.e. without using extra space).
// Note: You don't need to print the elements, just update the elements and return the head of updated LL.
// Input Constraints:
// 1 <= Length of Linked List <=10^6.
// Input format :
// Line 1 : Linked list elements (separated by space and terminated by -1)
// Output Format :
// Line 1: Updated linked list elements 
// Sample Input 1 :
// 3 9 2 5 -1
// Sample Output 1 :
// 3 9 2 6
// Sample Input 2 :
// 9 9 9 -1
// Sample Output 1 :
// 1 0 0 0 



Node *helper_reverse(Node *head)
{

    Node* curr=head;
    Node* prev=NULL;
    Node* next=NULL;
    
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        
    }
    return prev;
     
}




Node* NextLargeNumber(Node *head) {
  
    if(head==NULL)
    {
        return head;
    }
    
    head=helper_reverse(head);//  LL reversed
    
    Node *temp=head;
    
    
    while(temp!=NULL)// ULTA ITERATE KR RHE HAI
    {
    
        
        if(temp->data==9 && temp->next==NULL)// 999 vala case
         {
            temp->data=1;
            Node *newnode=new Node(0);
            newnode->next=head;
            head=newnode;
           // temp=temp->next;
            break;
        }
        
        else if(temp->data==9)
        {
            temp->data=0;
            temp=temp->next;
        }
        
        else 
        {
            temp->data=temp->data+1;
            //temp=temp->next;
            break;
        }
    }
        
        head=helper_reverse(head);
        
        return head;
    }