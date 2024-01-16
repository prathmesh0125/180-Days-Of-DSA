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

int main()
{
  node *head;
  head = NULL;

  int arr[]={2,3,4,5};

  // insert the node at begning

  // linked list dosent exist;
  for(int i=0;i<4;i++){
    if(head==NULL)
    {
      head=new node(arr[i]);
    }
    else{
      node *temp;
      temp=new node(arr[i]);
      temp->next=head;
      head=temp;
    }
  }
// print the value

node *temp=head;
while(temp!=NULL){
  cout<<temp->data<<" "<<temp->next<<"->";
  temp=temp->next;
}



  
}