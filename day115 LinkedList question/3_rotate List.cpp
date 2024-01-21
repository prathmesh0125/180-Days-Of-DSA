#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;

  Node(int value)
  {
    data = value;
    next = NULL;
  }
};

Node *createLinkedList(int arr[], int index, int n)
{
  if (index == n)
  {
    return NULL;
  }
  Node *temp;
  temp = new Node(arr[index]);
  temp->next = createLinkedList(arr, index + 1, n);
  return temp;
}
// Function to remove rotate List

Node* rotateList(Node *head,int k){
  if(head==NULL || head->next==NULL){
    return head;
  }
  int count=0;
  Node* temp=head;
  while(temp){
    count++;
    temp=temp->next;
  }
  k%=count;
  count-=k;
  if(k==0){//no nedd to rotate
    return head;
  }
  Node* curr=head,*prev=NULL;

  while(count--){
    prev=curr;
    curr=curr->next;
  }
 prev->next=NULL;

  Node* tail=curr;
  while(tail->next!=NULL){
    tail=tail->next;
  }
  tail->next=head;
  head=curr;
  return curr;

}

// Function to print the linked list
void printList(Node *head)
{
  Node *temp = head;
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
  Node *head;
  head = NULL;
  int arr[] = {1, 2, 3, 4, 5, 6, };

  head = createLinkedList(arr, 0, 6);

  // Printing the original linked list
  cout << "Original Linked List: ";
  printList(head);

  int k = 2;
  head = rotateList(head, k);

  // Printing the linked list
  cout << "rotatedd Linked List: ";
  printList(head);

  return 0;
}
