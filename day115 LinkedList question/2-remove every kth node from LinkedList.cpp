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

Node* createLinkedList(int arr[], int index, int n)
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
// Function to remove nth a linked list
Node* deleteK(Node *head,int k)
{
 if(k==1){
     return NULL;
 }
 Node *curr=head,*prev=NULL;
 int count=1;
 while(curr){
     if(k==count){
        prev->next=curr->next;
        delete curr;
        curr=prev->next;
        count=1;
     }
     else{
         prev=curr;
         curr=curr->next;
         count++;
     }
 }
      return head; 
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
  int arr[] = {1,2,3,4,5,6,7,8,9,10};

  head = createLinkedList(arr, 0, 10);

  // Printing the original linked list
  cout << "Original Linked List: ";
  printList(head);

  int k= 3;
  head = deleteK(head, k);

  // Printing the linked list
  cout << "output Linked List: ";
  printList(head);

  return 0;
}
