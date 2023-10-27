#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number between 1 t0 7" << endl;
    cin >> num;
    if (num == 1)
    {
        cout << "Monday" << endl;
    }
    else if (num == 2)
    {
        cout << "Tuesday" << endl;
    }
    else if (num == 3)
    {
        cout << "Wednesday" << endl;
    }
    else if (num ==4)
    {
        cout << "Thrusday" << endl;
    }
    else if (num ==5)
    {
        cout << "friday" << endl;
    }
    else if (num ==6)
    {
        cout << "Saturday" << endl;
    }
    else if (num ==7)
    {
        cout << "sunday" << endl;
    }
    else{
        cout<<"Enter valid number"<<endl;
    }
}