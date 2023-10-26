
class Solution{
  public:
   Node* getmid(Node* head){
       Node* slow=head;
       Node* fast=head->next;
       
       while(fast!=NULL && fast->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
       }
       return slow;
   }
    Node* reverse(Node* head){
       Node* prev=NULL;
       Node* curr=head;
       Node* forward=NULL;

    while(curr != NULL){
        forward = curr -> next ;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
   }
    bool isPalindrome(Node *head)
    {
        if(head->next==NULL){
            return true;
        }
        Node* middle = getmid(head);
        
        Node* temp=middle->next;
        middle->next=reverse(temp);
        
        Node* head1=head;
        Node* head2=middle->next;
        
        while(head2!=NULL){
            if(head1->data!=head2->data){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        
        temp=middle->next;
        middle->next=reverse(temp);
        
        return true;

    }
};

