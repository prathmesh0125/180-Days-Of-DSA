#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next;

  Node(int value){
    data=value;
    next=NULL;
  }
};
int main(){
  Node *head,*tail;
  tail=head=NULL;
  int arr[]={2,4,6,8,10};
  // insert the value at end;
  for(int i=0;i<5;i++){
    // LnkedList is empty  
    if(head==NULL)
    {
     head=new Node(arr[i]);
     tail=head;
    }
    // linked list is exit
    else{
      tail->next=new Node(arr[i]);
      tail=tail->next;
    }
  }
  Node *temp;
  temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}