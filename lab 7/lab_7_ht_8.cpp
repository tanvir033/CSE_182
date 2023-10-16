//Write a C++ program to insert an element into an array.

#include<iostream>
using namespace std;

main()
{
    int i,n;

    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    int arr[n];

    for(i=0; i < n; i++)
    {
     cin>>arr[i];
    }

    cout<<"The elements are"<<endl;
    for(i=0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}

