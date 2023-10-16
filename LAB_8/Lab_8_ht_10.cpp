#include<iostream>
using namespace std;

int main()
{
    int i, j, arr[10][10], r, c;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;
    cout << "Enter the elements: " << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The matrix is:" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }


    if (r != c)
    {
        cout << "It is not an identity matrix ." << endl;
        return 0;
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if ((i == j && arr[i][j] != 1) || (i != j && arr[i][j] != 0))
            {
                cout << "It is not an identity matrix." << endl;
                return 0;
            }
        }
    }

    cout << "It is an identity matrix." << endl;

    return 0;
}
