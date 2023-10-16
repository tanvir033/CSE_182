//Write a C++ program to check whether two matrices are equal or not.


#include<iostream>
using namespace std;

main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k=1;

    cout<<"Enter A: "<<endl;

    for(i=0 ; i < 3 ; i++)
    {
        for(j=0 ; j < 3 ; j++)
        {
            cin>>A[i][j];
        }
    cout<<endl;

    }


        cout<<"Enter B: "<<endl;

    for(i=0 ; i < 3 ; i++)
    {
        for(j=0 ; j < 3 ; j++)
        {
            cin>>B[i][j];
        }
    cout<<endl;

    }


 for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (A[i][j] != B[i][j])
            {
                k = 0;
                break;
            }
        }
        if (k == 0)
        {
            break;
        }
    }
    if(k==1)
    {
        cout<<"Matrix A = Matrix B"<<endl;
    }
    else{
        cout<<"Matrix A is not equal to Matrix B"<<endl;
    }


    return 0;

}



