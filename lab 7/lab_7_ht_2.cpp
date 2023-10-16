//Write a C++ program to find the second largest element in an array.

#include<iostream>
using namespace std;

main()
{
    int i,j,k,arr[10] = {5, 1, 4, 2, 8},temp;

    for(i=0; i < 5; i++)
    {
        for(j=0; j < 4; j++)
        {
            if(arr[j] > arr[j + 1]){
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j+1] = temp;
            }
        }
    }

        cout<<"The second largest element is: "<<arr[3];

    return 0;
}
