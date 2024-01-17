#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;
  node(int value)
  {
    data = value;
    next = NULL;
  }
};

node *createLinkedList(int arr[],int index,int n){
  if(index==n){
    return NULL;
  }
  node *temp;
  temp=new node(arr[index]);
  temp->next=createLinkedList(arr,index+1,n);
  return temp;
}
void deleteNodeatSpecificPos(node *&head,int x){
  if(x==1){
    node *temp=head;
    head=head->next;
    delete temp;
  }
  else{
    x--;
    node *curr=head;
    node *prev=NULL;
    while(x--){
      prev=curr;
      curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;

  }
}
void printLinkedList(node *head){
  node *temp=head;
  while(temp!=NULL){
  cout<<temp->data<<" ";
  temp=temp->next;
  }
  cout<<endl;
}
main()
{
  node *head;
  head=NULL;
  int arr[]={1,2,3,4,5,6};
  head=createLinkedList(arr,0,6);
  printLinkedList(head);
  int x=3;
  deleteNodeatSpecificPos(head,x);
  printLinkedList(head);

}