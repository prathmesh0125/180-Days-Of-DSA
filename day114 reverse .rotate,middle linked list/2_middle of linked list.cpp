#include <iostream>
#include <vector>
using namespace std;
class ListNode
{
public:
  int data;
  ListNode *next;

  ListNode(int value)
  {
    data = value;
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
// Function to reverse a linked list
ListNode *MiddleofLinkedList(ListNode *head)
{
  ListNode *temp = head;
  int count = 0;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  count /= 2;
  temp = head;
  while (count--)
  {
    temp = temp->next;
  }
  return temp;
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

  // Reversing the linked list
  ListNode *midlle = MiddleofLinkedList(head);
  cout << "Middle Node: " << midlle->data <<endl;
  return 0;
}
