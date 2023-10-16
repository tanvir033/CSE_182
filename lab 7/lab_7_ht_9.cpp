//Write a C++ program to delete an element from an array.

#include<iostream>
using namespace std;

main()
{
    int i,n,element,pos=-1;

    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    int arr[n];

    for(i=0; i < n; i++)
    {
     cin>>arr[i];
    }

    cout << "Enter the element to be deleted: ";
    cin >> element;

    for(i=0; i < n ; i++ )
    {
        if( arr[i] == element )
        {
            pos = i ;
            break;
        }
    }

    if(pos == -1)
    {
        cout<<"Element is not in here."<<endl;
    }
    else{
        for( i = pos ; i < n ; i++ )
        {
            arr[i] = arr[i+1] ;
        }
        n--;

        cout<<"Array after deleting "<<endl;
        for(i=0 ; i < n ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

