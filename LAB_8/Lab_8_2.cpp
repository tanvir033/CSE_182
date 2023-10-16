#include<iostream>
using namespace std;

main()
{

    int i, j, arr[10][10], r, c, is_upper = 1;
    cout<<"Enter the number of row: ";
    cin>>r;
    cout<<"Enter the number of column: ";
    cin>>c;
    cout<<"Enter the elements: "<<endl;



    for(i=0; i < r; i++)
    {
        for(j=0; j < c; j++)
            {
                cin>>arr[i][j];
            }
    }
    cout<<"The matrix is"<<endl;
    for(i=0; i < r; i++)
    {
        for(j=0; j < c; j++)
            {
                cout<<arr[i][j]<<"\t";
            }
            cout<<endl;
    }


    for(i=0; i < r; i++)
    {
        for(j=0; j < c; j++)
            {
                if(j < i && arr[i][j] != 0)
                {
                    is_upper = 0 ;
                }
            }
    }

    if(is_upper == 1)
    {
        cout<<"\nUpper triangular matrix."<<endl;
    }

    else
    {
        cout<<"\nNot Upper triangular matrix."<<endl;
    }


    return 0;
}
