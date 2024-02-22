#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
  int data;
  Node *left, *right;

  Node(int value)
  {
    data = value;
    left = right = NULL;
  }
};

Node *binayTree()
{
  int x;
  cin >> x;
  if (x == -1)
  {
    return NULL;
  }
  Node *temp = new Node(x);
  // left side create
  cout << "enter the left child of " << x << endl;
  temp->left = binayTree();
  // right side create
  cout << "enter the right child of " << x << endl;

  temp->right = binayTree();
  return temp;
}

void postOrder(Node *root)
{
  if (root == NULL)
    return;
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}

int main()
{
  cout << "enter the root node " << endl;
  Node *root;
  root = binayTree();

  cout << "posOrder: " << endl;
  postOrder(root);
}