#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int Timeneeded(vector<int> Tickets, int k)
{
  queue<int> q;
  int time = 0;
  for (int i = 0; i < Tickets.size(); i++)
  {
    q.push(i);
  }
  while (Tickets[k] != 0)
  {
    Tickets[q.front()]--;
    if (Tickets[q.front()])
    {
      q.push(q.front());
    }
    q.pop();
    time++;
  }
  return time;
}

int main()
{
  int k = 2;
  vector<int> Tickets = {1, 5, 2, 3, 7};
  cout<<Timeneeded(Tickets,k);
}