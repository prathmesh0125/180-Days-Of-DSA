#include <iostream>
using namespace std;
int main()
{
  int a = 10;
  // cout<<&a<<endl;
  // int *b= &a;
  // cout<<*b<<endl;
  // cout<<b<<endl;
  // float m=1.0;
  // cout<<&m<<endl;
  // float *ptr=&m;
  // cout<<ptr<<endl;

  // int *p=0;
  // cout<<sizeof(p);

  int *pt = &a;
  cout << pt << endl;  // addres of a;
  cout << *pt << endl; // value inside a;

  int b = 12;
  pt = &b;
  cout << pt << endl;  // addres of a;
  cout << *pt << endl; // value inside a;

  b = 30;
  cout << *pt << endl; // value inside a;
}