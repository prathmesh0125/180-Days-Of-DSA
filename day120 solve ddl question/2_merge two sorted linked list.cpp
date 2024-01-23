#include <iostream>
using namespace std;
class node
{
public:
  int data;
  node *prev;
  node *next;
  node(int value)
  {
    data = value;
    prev = NULL;
    next = NULL;
  }
};
// by using recurssion
node *createLinkedList(int arr[], int n, node *back, int index)
{
  if (index == n)
  {
    return NULL;
  }
  node *temp = new node(arr[index]);
  temp->prev = back;
  temp->next = createLinkedList(arr, n, temp, index + 1);
  return temp;
}
node* sortedMerge(node* head1, node* head2)  
{  
    node *head=new node(0);
    node *tail=head;
    while(head1 && head2){
        if(head1->data<=head2->data){
            tail->next=head1;
            head1=head1->next;
            tail=tail->next;
            tail->next=NULL;
        }
        else{
               tail->next=head2;
            head2=head2->next;
            tail=tail->next;
            tail->next=NULL;
        }
    }
    if(head1){
        tail->next=head1;
        
    }
    else{
        tail->next=head2;
    }
    tail=head;
    head=head->next;
    delete tail;
    return head;
    
}
void printLinkedList(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
int main()
{
  node *head = NULL;
  int arr[] = {1, 2, 3, 4};
  int arr2[] = {3, 6, 7, 9};

  node *head1 = NULL;
  node *head2 = NULL;
  head1 = createLinkedList(arr, 4, NULL, 0);
  head2 = createLinkedList(arr2, 4, NULL, 0);

  printLinkedList(head1);
  printLinkedList(head2);
  head = sortedMerge(head1,head2);

  printLinkedList(head);
}