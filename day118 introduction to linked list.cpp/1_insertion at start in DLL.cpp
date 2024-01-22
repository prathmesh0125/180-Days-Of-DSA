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
    next = prev = NULL;
  }
};

node *createLinkedList(node *head, int arr[], int n)
{
  node *tail = NULL;
  for (int i = 0; i < n; i++)
  {
    if (head == NULL)
    {
      head = new node(arr[i]);
      tail = head;
    }
    else
    {
      node *temp = new node(arr[i]);
      tail->next = temp;
      temp->prev = temp;
      tail = temp;
    }
  }
  return head;
}
node *InsertNodeAtfirst(node *head)
{
  if (head == NULL)
  {
    head = new node(5);
  }
  else
  {
    node *temp = new node(5);
    temp->next = head;
    head->prev = temp;
    head=temp;
  }
  return head;
}
void printList(node *head)
{
  node *temp = head;
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout<<endl;
}
int main()
{
  node *head = NULL;
  // insert at start
  // Linked List does't exist

  int arr[] = {1, 2, 3, 4, 5};
  printList(head);
  head = createLinkedList(head, arr, 5);
  printList(head);
  head = InsertNodeAtfirst(head);
  printList(head);
}