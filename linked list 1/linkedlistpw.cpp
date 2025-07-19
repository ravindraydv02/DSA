#include<iostream>
using namespace std ;
class node{
    public:
    int val;
    node* next;

    node(int data){
        val=data;
        next=NULL;
    }
};
void insertAtHead(node*&head,int val){
    node*new_node=new node(val);
    new_node->next=head;
    head = new_node ;

}
void insertAtTail(node* &head,int val){
    node* new_node=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    temp->next=new_node;

}
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}
int main(){
    node*head=NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,3);
    display(head);
}