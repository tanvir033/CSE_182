//Write a C++ program to add two matrices.


#include<iostream>
using namespace std;

main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k,sum=0;

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




        cout<<"Enter the values for matrix B: "<<endl;

    for(i=0 ; i < 3 ; i++)
    {
        for(j=0 ; j < 3 ; j++)
        {
            cin>>B[i][j];
        }
    cout<<endl;

    }
    cout<<"Matrix B: "<<endl;


    for(i=0 ; i < 3 ; i++)
    {
        for(j=0 ; j < 3 ; j++)
        {
            cout<<B[i][j]<<"\t";

        }
        cout<<endl;

    }
    cout<<endl;


        for(i=0 ; i < 3 ; i++)
    {

        for(j=0 ; j < 3 ; j++)
        {
            C[i][j] = 0;
            C[i][j]=A[i][j] + B[i][j];
        }
    }
        cout<<"Matrix C "<<endl;

    for(i=0; i < 3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cout<<C[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;

}



