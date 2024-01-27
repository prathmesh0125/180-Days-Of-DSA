#include <iostream>
#include <vector>

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
  Node *temp = new Node(arr[index]);
  temp->next = createLinkedList(arr, index + 1, n);
  return temp;
}

// Function to reverse a linked list
Node *reverse(Node *curr, Node *prev)
{
  if (curr == NULL)
  {
    return prev;
  }
  Node *fut = curr->next;
  curr->next = prev;
  return reverse(fut, curr);
}

// Function to add two linked lists representing numbers in reverse order
Node *addTwoLists(struct Node *first, struct Node *second)
{
  first = reverse(first, NULL);
  second = reverse(second, NULL);
  Node *curr1 = first, *curr2 = second;
  Node *head = new Node(0); // dumy node for haning extra condition
  Node *tail = head;        // for adding ,addtion in linked list;
  int carry = 0;
  while (curr1 && curr2)
  {
    int sum = curr1->data + curr2->data + carry;
    tail->next = new Node(sum % 10);
    tail = tail->next;
    curr1 = curr1->next;
    curr2 = curr2->next;
    carry = sum / 10;
  }
  while (curr1)
  {
    int sum = curr1->data + carry;
    tail->next = new Node(sum % 10);
    tail = tail->next;
    curr1 = curr1->next;
    carry = sum / 10;
  }
  while (curr2)
  {
    int sum = curr2->data + carry;
    tail->next = new Node(sum % 10);
    tail = tail->next;
    curr2 = curr2->next;
    carry = sum / 10;
  }
  while (carry)
  {
    tail->next = new Node(carry % 10);
    tail = tail->next;
    carry /= 10;
  }
  head = reverse(head->next, NULL);
  return head;
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
  Node *first;
  Node *second;
  first = NULL;
  second = NULL;
  int arr1[] = {9, 7, 6, 8, 4};
  int arr2[] = {6, 4, 3, 8};

  first = createLinkedList(arr1, 0, 5);
  second = createLinkedList(arr2, 0, 4);

  // Printing the original linked list
  cout << "Original Linked Lists: " << endl;
  printList(first);
  printList(second);

  // Reverse the linked lists
  // first = reverse(first, NULL);
  // second = reverse(second, NULL);

  // Printing the reversed linked lists
  cout << "Reversed Linked Lists: " << endl;
  printList(first);
  printList(second);

  // Add the reversed linked lists
  Node *result = addTwoLists(first, second);

  // Printing the result
  cout << "Result: ";
  printList(result);

  return 0;
}
