#include <iostream>
using namespace std;
// void func(int **ptr){
//   // *p=*p+5;
//   // *ptr=*ptr+1;
//   *ptr++;
// }
void func(int &ptr){

  ptr=ptr+1;
}
int main()
{
  int a = 10;
 

  int p=a;
  // int ptr=p;
  cout<<&p<<endl;
  func(p);
  cout<<&p;
  
}