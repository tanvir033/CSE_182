//Write a C++ program to find the sum of the minor diagonal elements of a matrix.
#include<iostream>
using namespace std;

main()
{
    int A[3][3],B[3][3],C[3][3],i,j,sum=0;

    cout<<"Enter the values for matrix A: "<<endl;

    for(i=0 ; i < 3 ; i++)
    {
        for(j=0 ; j < 3 ; j++)
        {
            cin>>A[i][j];
        }
    cout<<endl;

    }

    cout<<"Matrix A: "<<endl;

    for(i=0 ; i < 3 ; i++)
    {
        for(j=0 ; j < 3 ; j++)
        {
            cout<<A[i][j]<<"\t";

        }
        cout<<endl;

    }




            for(i=0 ; i < 3 ; i++)
    {

        for(j=0 ; j < 3 ; j++)
        {
            if(i == j)
            {
                sum += A[i][2-i];
            }
        }
    }

    cout<<"The sum is :"<<sum<<endl;
    return 0;
}

