#include<iostream>
using namespace std;
class human{
private:
int a;
protected:
int b;
public :
int c;

void fun(){
  a=10;
  b=12;
  c=102;
}
};
int main(){
  human h;
  // h.a=10;//not access
  // h.b=10;//not access
  h.c=10;
}