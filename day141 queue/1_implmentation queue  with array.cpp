#include <iostream>
using namespace std;
class queue
{
  int *arr;
  int front, rear, size;

public:
  queue(int n)
  {
    arr = new int[n];
    front = rear = -1;
  }
  // if queue is empty or not
  bool isempty()
  {
    return front == -1;
  }
  // size of ques is full or not
  bool isfull()
  {
    return rear == size - 1;
  }
  // push element in queue

  void push(int x)
  {
    if (isempty())
    {
      cout << "pushed " << x << " into the queue" << endl;
      front = rear = 0;
      arr[0] = x;
    }
    else if (isfull())
    {
      cout << "array is already full " << endl;
      return;
    }
    else
    {
      rear = rear + 1;
      arr[rear] = x;
      cout << "pushed " << x << " into the queue" << endl;
    }
  }
  // pop element from queue
  void pop()
  {
    // empty
    if (isempty())
    {
      cout << "queue underflow" << endl;
      return;
    }
    else
    {
      if (front == rear)
      {
        cout << "popped " << arr[front] << " element from queue" << endl;
        front = rear = -1;
      }
      else
      {
        cout << "popped " << arr[front] << " element from queue" << endl;
        front = front + 1;
      }
    }
  }
  int start()
  {
    if (isempty())
    {
      cout << "queue is empty" << endl;
      return -1;
    }
    else
    {
      return arr[front];
    }
  }
};
int main()
{
  // queue q(5);
  // q.push(2);
  // q.push(3);
  // q.push(5);
  // q.pop();
  // q.pop();
  // q.pop();
  // int x = q.start();
  // if (!q.isempty())
  // {
  //   cout << x << " ";
  // }
   queue q(5);
  q.push(5);
  q.push(15);
  q.push(51);
  q.push(125);
  q.pop();
  q.pop();
  q.push(511);
  q.push(38);
  q.pop();
}