#include <iostream>
#include <vector>
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
// Function to reverse a linked list
ListNode *reverseList(ListNode *head)
{
  ListNode *temp = head;
  vector<int> ans;
  while (temp != NULL)
  {
    ans.push_back(temp->data);
    temp = temp->next;
  }
  int i = ans.size() - 1;
  temp = head;
  while (temp)
  {
    temp->data = ans[i];
    i--;
    temp = temp->next;
  }
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

  // Reversing the linked list
  head = reverseList(head);

  // Printing the reversed linked list
  cout << "Reversed Linked List: ";
  printList(head);

  return 0;
}
