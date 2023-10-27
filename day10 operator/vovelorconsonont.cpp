#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter character" << endl;
    cin >> ch;
    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        cout << "Vovel" << endl;
    }
    else
    {
        cout << "consonant" << endl;
    }
}