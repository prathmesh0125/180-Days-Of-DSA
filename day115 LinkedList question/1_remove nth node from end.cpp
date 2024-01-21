#include <iostream>
using namespace std;
class ListNode
{
public:
  int data;
  ListNode *next;

  ListNode(int dataue)
  {
    data = dataue;
    next = NULL;
  }
};

ListNode *createLinkedList(int arr[], int index, int n)
{
  if (index == n)
  {
    return NULL;
  }
  ListNode *temp;
  temp = new ListNode(arr[index]);
  temp->next = createLinkedList(arr, index + 1, n);
  return temp;
}
// Function to remove nth a linked list
ListNode *removeNthFromEnd(ListNode *head, int n)
{
  int count = 0;
  ListNode *temp = head;
  while (temp)
  {
    count++;
    temp = temp->next;
  }
  count -= n;
  if (count == 0)
  {
    temp = head;
    head = head->next;
    delete temp;
    return head;
  }
  ListNode *curr = head, *prev = NULL;
  while (count--)
  {
    prev = curr;
    curr = curr->next;
  }
  prev->next = curr->next;
  delete curr;
  return head;
}

// Function to print the linked list
void printList(ListNode *head)
{
  ListNode *temp = head;
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
  ListNode *head;
  head = NULL;
  int arr[] = {2, 3, 4, 5, 6, 7};

  head = createLinkedList(arr, 0, 6);

  // Printing the original linked list
  cout << "Original Linked List: ";
  printList(head);

  int n = 3;
  head = removeNthFromEnd(head, n);

  // Printing the linked list
  cout << "output Linked List: ";
  printList(head);

  return 0;
}
