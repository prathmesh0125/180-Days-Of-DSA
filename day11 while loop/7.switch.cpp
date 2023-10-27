#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Enter number" << endl;
    cin >> i;
    switch (i)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thrusday" << endl;
        break;
    case 5:
        cout << "friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Ener the valid day" << endl;
        break;
    }
}