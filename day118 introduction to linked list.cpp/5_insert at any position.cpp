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
// insert at specific
node *insertAtspecficPostion(node *head, int pos)
{
  if (pos == 0)
  { // insert at start
    if (head == NULL)
    {
      head = new node(2);
    }
    else
    {
      node *temp = new node(2);
      temp->next = head;
      head->prev = temp;
      head = temp;
    }
  }
  else
  {
    node *curr = head;
    while (pos--)
    {
      curr = curr->next;
    }
    if (curr->next == NULL)
    { // insert at end
      node *temp = new node(2);
      temp->prev = curr;
      curr->next = temp;
    }
    else
    { // at middle
      node *temp = new node(2);
      temp->next = curr->next;
      temp->prev = curr;
      curr->next = temp;
      temp->next->prev = temp;
    }
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
  int arr[] = {0, 1, 3, 4, 5};
  head = createLinkedList(arr, 5, NULL, 0);
  printLinkedList(head);
  int pos = 4;
  head = insertAtspecficPostion(head, pos);
  printLinkedList(head);
}