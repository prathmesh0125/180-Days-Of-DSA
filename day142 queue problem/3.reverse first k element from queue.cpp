#include <iostream>
#include <queue>
#include <stack>
using namespace std;

queue<int> reversefirstkelement(queue<int> &q, int k)
{
  stack<int> st;
  // remove first k element
  while (k--)
  {
    st.push(q.front());
    q.pop();
  }
  // size of queue
  int n = q.size();
  // insert into queue
  while (!st.empty())
  {
    q.push(st.top());
    st.pop();
  }
  // push first n element into queue
  while(n--){
    q.push(q.front());
    q.pop();
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
  q.push(3);
  q.push(7);
  q.push(10);
  q.push(13);
  q.push(8);
  q.push(5);
  q.push(4);
  int k = 3;
  reversefirstkelement(q, k);
  print(q);
}