//ITERATIVE APPROACH 
//TIME COMPLEXITY - O(N)
//space complexity - o(1)

#include <bits/stdc++.h>
using namespace std;
 
/* Link list node */
class node {
    public:
    int data;
    node* next;
    
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

//reverse a ll
void reverseLinkedList(node* head){
    if(head==NULL || head->next==NULL){
        return;
    }
    node* prev=NULL;
    node* curr=head;
    node* forward=NULL;

    while(curr != NULL){
        forward = curr -> next ;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
}
//traversing
void print(node* &head){
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
}


//recursive approach
void reverseLinkedList(node* &head, node* curr, node* prev){
     //base case
     if(curr==NULL){
        head = prev;
        return;
     }
     node* forward=curr->next;
     reverseLinkedList(head,forward,curr);
     curr->next=prev;
}
node* reverse(node* &head){
    node* curr=head;
    node* prev=NULL;

    reverseLinkedList(head,curr,prev);

    return head;


}