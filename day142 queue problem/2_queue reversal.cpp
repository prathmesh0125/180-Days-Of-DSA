#include <iostream>
#include <queue>
#include <stack>
using namespace std;

queue<int> reverse(queue<int> &q)
{
  stack<int> st;
  // insert into stack
  while (!q.empty())
  {
    st.push(q.front());
    q.pop();
  }
  // insert into queue
  while (!st.empty())
  {
    q.push(st.top());
    st.pop();
  }
  return q;
}

void print(queue<int> q)
{
  int n = q.size();
  while (n--)
  {
    cout << q.front() << " ";
    q.push(q.front());
    q.pop();
  }
}
int main()
{
  queue<int> q;
  q.push(6);
  q.push(7);
  q.push(8);
  q.push(9);
  q.push(10);
  reverse(q);
  print(q);
}