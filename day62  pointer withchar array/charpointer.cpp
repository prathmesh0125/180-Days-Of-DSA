#include <iostream>
using namespace std;
int main()
{

  // char c[4]={97,98,99};
  // // char c[4]="123";
  // char *ptr=c;
  // cout<<*(ptr+1)<<endl;
  // cout<<(void*)c<<endl;
  // cout<<(void*)ptr<<endl;


  char name='a';
   char *ptr=&name;
   cout<<*ptr<<endl;
   cout<<&name<<endl;
   cout<<(void *)&name<<endl;
 
   cout<<(void*)ptr<<endl;
}