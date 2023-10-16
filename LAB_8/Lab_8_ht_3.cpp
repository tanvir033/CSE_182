//Write a C++ program to perform Scalar matrix multiplication.



#include<iostream>
using namespace std;

main()
{
    int A[3][3],C[3][3],i,j,n;

    cout<<"Enter A: "<<endl;

    for(i=0 ; i < 3 ; i++)
    {
        for(j=0 ; j < 3 ; j++)
        {
            cin>>A[i][j];
        }

    }

    cout<<"n: ";
    cin>> n;
    cout<<endl;

        for(i=0 ; i < 3 ; i++)
    {

        for(j=0 ; j < 3 ; j++)
        {
            C[i][j] = 0;
            C[i][j]=n * A[i][j];
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
