#include <iostream>
using namespace std;
void second(int *p1, int *p2)
{
  p1 = p2;
  *p1 = 2;
}

int main()
{
  // 1
  // char ch[]="GATE2024";
  // char *p=ch;
  // cout<<p+p[3]-p[1]<<endl;
  // cout<<(void*)p<<endl;

  // 2
  // int i=0;
  // int j=1;
  // second(&i,&j);
  // cout<<i<<j<<endl;

  // 3
  // int *ptr;
  // int x=0;
  // ptr=&x;
  // int y=*ptr;
  // *ptr=1;
  // cout<<x<<y;

  // 4

  int a=5;
  int b=10;
  int &name=a;
  int *ptr=&a;
  (*ptr)++;
  ptr=&b;
  *ptr=*ptr+5;
  name+=5;
  cout<<a<<b;

}