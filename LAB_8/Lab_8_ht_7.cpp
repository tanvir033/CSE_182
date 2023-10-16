//Write a C++ program to find the lower triangular matrix.


#include<iostream>
using namespace std;

main()
{

    int i, j, arr[3][3], r, c, is_lower = 1;


    for(i=0; i < 3; i++)
    {
        for(j=0; j < 3; j++)
            {
                cin>>arr[i][j];
            }
    }

    for(i=0; i < 3; i++)
    {
        for(j=0; j < 3; j++)
            {
                if (j < i && arr[i][j] != 0 && i == j && arr[i][j] != 0)
                {
                    is_lower = 0 ;
                }
            }
    }

    if(is_lower == 1)
    {
        cout<<"\nLower triangular matrix."<<endl;
    }

    else
    {
        cout<<"\nNot lower triangular matrix."<<endl;
    }


    return 0;
}
