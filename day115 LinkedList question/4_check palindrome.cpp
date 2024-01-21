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

bool isPalindrome(Node *head)
{
  if (head->next == NULL)
  {
    return 1;
  }
  int count = 0;
  Node *temp = head;
  while (temp)
  {
    count++;
    temp = temp->next;
  }
  count /= 2;
  Node *prev = NULL, *curr = head;
  while (count--)
  {
    prev = curr;
    curr = curr->next;
  }
  prev->next = NULL;
  Node *fut = NULL;
  prev = NULL;
  while (curr)
  {
    fut = curr->next;
    curr->next = prev;
    prev = curr;
    curr = fut;
  }
  Node *head1 = head;
  Node *head2 = prev;
  while (head1)
  {
    if (head1->data != head2->data)
    {
      return 0;
    }

    head1 = head1->next;
    head2 = head2->next;
  }
  return 1;
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
  int arr[] = {1, 2, 3, 3, 2, 1};

  head = createLinkedList(arr, 0, 6);

  // Printing the original linked list
  cout << "Original Linked List: ";
  printList(head);

  int ans = isPalindrome(head);
  cout<<ans<<endl;

  return 0;
}
