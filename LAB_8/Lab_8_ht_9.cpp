//Write a C++ program to check whether a matrix is sparse or not.

#include<iostream>
using namespace std;

main()
{

    int i, j, arr[10][10], r, c, non_zero=0, zero=0;
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
                if( arr[i][j] == 0 )
                {
                  zero++;
                }
                else{
                    non_zero++;
                }
            }
    }

    if(zero > non_zero)
    {
        cout<<"It is sparse"<<endl;
    }
    else{
        cout<<"It is not sparse"<<endl;
    }

    return 0;

}

