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

node *createLinkedList(int arr[], int index, int n)
{
  if (index == n)
  {
    return NULL;
  }
  node *temp;
  temp = new node(arr[index]);
  temp->next = createLinkedList(arr, index + 1, n);
  return temp;
}
void printLinkedList(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
int main()
{
  node *head;
  head = NULL;
  int arr[] = {2, 3, 4, 5};
  head = createLinkedList(arr, 0, 4);

  // print linked list;
  printLinkedList(head);
}