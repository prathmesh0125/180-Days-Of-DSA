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
      temp->prev = tail;
      tail = temp;
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
    temp=temp->next;
  }
}
int main()
{
  node *head = NULL;
  int arr[] = {1, 2, 3, 4, 5};
  head = createLinkedList(head, arr, 5);
  printLinkedList(head);
}