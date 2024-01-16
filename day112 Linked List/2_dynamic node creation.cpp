#include<iostream>
using namespace std;
class node{
  public:
  int data;
  node *next;

  node(int value){
    data=value;
    next=NULL;
  }
  void display()
  {
    cout<<data<<" "<<next;
  }
};
int main(){
  node *head;
  head=new node(4);
  (*head).display();

}