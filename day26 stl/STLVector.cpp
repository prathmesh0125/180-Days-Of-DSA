#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // create vector and declare
    vector<int> v;
    cout << "vector size: " << sizeof(v) << endl;
    // size and capaciy of vector
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(4);
    v.push_back(5);
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);
    v.push_back(2);
    v.push_back(1);
    cout << "vector size of v:" << v.size() << endl;
    cout << "vector capacity: " << v.capacity() << endl;
    // updae value
    v[3] = 9;

    vector<int> v1(6, 1);
    // v1.push_back(3);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "vector size of v:" << v1.size() << endl;
    cout << "vector capacity: " << v1.capacity() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> v3 = {1, 2, 3, 4, 5};

    // for (int i = 0; i < v3.size(); i++)
    // {
    //     cout << v3[i] << " ";
    // }
}