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
// delete a node at end
// 3 cases when deleting a node
/*
1.linked list doesn't exist
2.linked list haveing only one node
3.linkded list noe is greater than 1;

*/
void deleteNodeAtEnd(node *&head)
{
  if (head != NULL) // linked list doesn't exist
  {
    if (head->next == NULL)
    {
      // linked list has only one node
      // head = NULL;
      // delete head;
      node *temp = head;
      head = NULL;
      delete temp;
    }
    else
    {
      node *curr = head;
      node *prev = NULL;
      while (curr->next != NULL)
      {
        prev = curr;
        curr = curr->next;
      }

      prev->next = NULL;
      delete curr;
    }
  }
}

int main()
{
  node *head;
  head = NULL;
  int arr[] = {1, 2, 3, 4, 5, 6};

  head = createLinkedList(arr, 0, 6);
  printLinkedList(head);

  // delete a node at end
  deleteNodeAtEnd(head);

  printLinkedList(head);

  return 0;
}
