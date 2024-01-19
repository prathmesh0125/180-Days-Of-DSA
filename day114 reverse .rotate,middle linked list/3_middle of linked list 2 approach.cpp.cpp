#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
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

// Function to find the middle node of a linked list
ListNode *middleNode(ListNode *head)
{
    ListNode *slow = head, *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = (fast->next)->next;
    }
    return slow;
}

// Function to print the linked list
void printList(ListNode *head)
{
    ListNode *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
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

    // Finding the middle node
    ListNode *middle = middleNode(head);

    // Printing the middle node
    cout << "Middle Node: " << middle->val << endl;

    return 0;
}
