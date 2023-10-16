//Write a C++ program to find the reverse of an array.

#include<iostream>
using namespace std;

main()
{
    int i, j, k, arr[10] = {5, 1, 4, 2, 8}, temp, sum=1 ;
    cout<<"The reverse of the array is "<<endl;
    for(i= 4 ; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
