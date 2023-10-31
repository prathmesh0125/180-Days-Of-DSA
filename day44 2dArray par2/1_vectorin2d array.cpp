#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // vector<vector<int> >matrix(4,vector<int>(3,1))={1,2,3,4,5,6,7,8,9,10,111,12};
    // vector<vector<int>>matrix(4,vector<int>(3,2));
    //     for(int i=0;i<4;i++){
    //         for(int j=0;j<3;j++){
    //             cout<<matrix[i][j]<<" ";
    //         }
    //     }
    //     // for finding rows and columns
    //     cout<<"Rows "<<matrix.size()<<endl;
    //     cout<<"columns "<<matrix[0].size()<<endl;

    // take input form user

    int n, m;
    cout << "Rows " << endl;
    cin >> n;
    cout << "col " << endl;
    cin >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 2));
    cout << "enter values" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "rows wise " << endl;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "column wise" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}