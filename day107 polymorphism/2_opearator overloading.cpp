#include <iostream>
using namespace std;
class complex
{
  int real, img;

public:
  complex()
  {
  }

  complex(int real, int img)
  {
    this->real = real;
    this->img = img;
  }
  void display()
  {
    cout << real << " +i" << img << endl;
  }

  complex operator+(complex &c)
  {
    complex ans;
    ans.real = real + c.real;
    ans.img = img + c.img;
    return ans;
  }
};
int main()
{
  complex c1(3, 4);
  complex c2(4, 6);
  c1.display();
  c2.display();
  complex c3 = c1 + c2;
  c3.display();
}