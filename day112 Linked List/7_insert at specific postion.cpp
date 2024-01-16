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
  cout<<endl;
}

int main()
{
  node *head;
  head = NULL;
  int arr[] = {2,4,6,8,10};

  head = createLinkedList(arr, 0, 5);
  printLinkedList(head);

  // insert at particular position
  int x = 3;
  int value = 30;

  node *temp = head;
  x--;
  while (x--)
  {
    temp = temp->next;
  }
  node *temp2 = new node(value);
  temp2->next=temp->next;
  temp->next=temp2;
  printLinkedList(head);
}