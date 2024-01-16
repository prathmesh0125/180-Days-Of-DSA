#include<iostream>
using namespace std;
class node{
public:
int data;
node *next;

void display(){
  cout<<data<<" "<<next;
}
};
int main(){
  node a;
  a.data=10;
  a.next=NULL;
  a.display();
}