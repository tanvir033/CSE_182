//Write a C++ program to find the maximum and minimum elements from an array.

#include<iostream>
using namespace std;

main()
{
    int a, i, arr[10] = {5, 1, 4, 2, 8}, max_array, min_array;

    max_array = arr[0];
    min_array = arr[0];
    for(i=1; i < 5; i++)
    {
        if(arr[i]>max_array)
        {
            max_array=arr[i];
        }
    }

    for(i=1; i < 5; i++){
        if(arr[i]<min_array)
        {
            min_array=arr[i];
        }
    }

    cout<<"Minimum number among the elements is : "<<min_array<<endl;
    cout<<"Maximum number among the elements is : "<<max_array<<endl;

    return 0;
}
