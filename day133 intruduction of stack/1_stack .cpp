#include <iostream>
using namespace std;
// inplment with array
class stack
{
  int *arr;
  int size;
  int top;

public:

bool flag;// for negative value
  stack(int s)
  {
    size = s;
    top = -1;
    arr = new int[s];
    flag=1;
  }
  // push
  void push(int value)
  {
    if (top == size - 1)
    {
      cout << "stack overflow" << endl;
      return;
    }
    else
    {
      top++;
      arr[top] = value;
      cout << "pushed "<< arr[top]<<" in stack" << endl;
      flag=0;
    }
  }
  //  pop
  void pop()
  {
    if (top == -1)
    {
      cout << "stack is underflow" << endl;
    }
    else
    {
      top--;
      cout << "popped " << arr[top + 1] << " from the stack" << endl;
      if(top==-1){
        flag=1;
      }
    }
  }
  // peek -> top elemenet
  int peek()
  {
    if (top == -1)
    {
      cout << "stack is empty" << endl;
      return -1;
    }
    else
    {
      return arr[top];
    }
  }
  bool isEmpty()
  {
    return top == -1;
  }
  int issize()
  {
    return top + 1;
  }
};
int main()
{
  stack s(5);
//   s.push(4);
//   s.push(5);
//   s.push(6);
//  cout<<s.peek()<<endl;
//  s.pop();
//  cout<<s.peek()<<endl;
// for negative value
s.push(-1);
//  cout<<s.peek()<<endl;
int value=s.peek();
if(s.flag==0){
  cout<<value<<endl;
}
}