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
 node* segregate(node *head) {
        
     node *curr=head;
     int count0=0,count1=0,count2=0;
     while(curr){
         if(curr->data==0){
             count0++;
         }
         else if(curr->data==1){
             count1++;
         }
         else{
             count2++;
         }
         curr=curr->next;
     }
     curr=head;
     while(count0--)
     {
         curr->data=0;
         curr=curr->next;
     }
     while(count1--)
     {
         curr->data=1;
         curr=curr->next;
     }
     while(count2--)
     {
         curr->data=2;
         curr=curr->next;
     }
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
  int arr[] = {0,1,2,2,2,0,1};
  head = createLinkedList(arr, 7, NULL, 0);

  printLinkedList(head);
  head = segregate(head);

  printLinkedList(head);
}