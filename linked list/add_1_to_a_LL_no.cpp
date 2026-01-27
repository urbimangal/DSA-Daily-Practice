/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverse(Node* head){
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL){
            Node* newNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=newNode;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        // Your Code here
        int carry=1;
        head=reverse(head);
        Node* temp=head;
        while(temp!=NULL){
            temp->data=temp->data+carry;
            if(temp->data<10){
                carry=0;
                break;
            } else{
                carry=1;
                temp->data=0;
            }
            temp=temp->next;
        }
        if(carry==1){
            Node* newNode=new Node(1);
            head=reverse(head);
            newNode->next=head;
            return newNode;
        }
        head=reverse(head);
        return head;
        // return head of list after adding one
    }
};
