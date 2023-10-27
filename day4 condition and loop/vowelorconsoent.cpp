#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter character" << endl;
    cin >> ch;
    if (ch=='a' || ch=='A' )
    {
        cout << "vowel" << endl;
    }
    else if(ch=='e' || ch=='E'){
        cout << "vowel" << endl;

    }
    else if(ch== 'i' || ch=='i'){
        cout << "vowel" << endl;

    }
    else if(ch== 'o' || ch=='O'){
        cout << "vowel" << endl;

    }
    else if(ch== 'u' || ch=='U'){
        cout << "vowel" << endl;

    }
    else{
        cout<<"consonat"<<endl;
    }
}