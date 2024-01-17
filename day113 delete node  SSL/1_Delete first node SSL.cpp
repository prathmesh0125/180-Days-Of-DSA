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
  cout << endl;
}

void deleteNodeatstart(node *&head)
{
  if (head != NULL)
  {
    node *temp = head;
    head = temp->next;
    delete (temp);
  }
}

int main()
{
  node *head;
  head = NULL;
  int arr[] = {2, 3, 4, 5, 6, 7};

  head = createLinkedList(arr, 0, 6);
  printLinkedList(head);
deleteNodeatstart(head);
  printLinkedList(head);
}