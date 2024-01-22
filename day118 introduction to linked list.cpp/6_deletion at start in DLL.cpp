
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
node *deleteAtStart(node *head)
{
  if (head != NULL)
  {
    node *temp = head;
    head = head->next;
    delete temp;
    if (head)
    {
      head->prev = NULL;
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
  cout<<endl;
}
int main()
{
  node *head = NULL;
  int arr[] = {1, 2, 3, 4, 5};
  head = createLinkedList(arr, 5, NULL, 0);
  printLinkedList(head);
  head = deleteAtStart(head);
  printLinkedList(head);
}