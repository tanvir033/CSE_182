//Write a C++ program to count the total number of even and odd elements in an array.

#include<iostream>
using namespace std;

main()
{
    int i, j,arr[10] = {5, 1, 4, 2, 8}, a=0, b=0;

    for(i=0; i < 5; i++){
        if(arr[i]%2==0)
        {
            a+=1;
        }
        else
        {
            b+=1;
        }
    }

    cout<<"Total number of even numbers are: "<<a<<endl;

    cout<<"Total number of odd numbers are: "<<b<<endl;

    return 0;
}
