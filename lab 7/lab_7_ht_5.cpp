//Write a C++ program to count the total number of duplicate elements in an array.

#include<iostream>
using namespace std;

main()
{
    int i,j,k,arr[12] = {1,8,6,2,4,3,5,6,7,8,9,2},a=0;

    for (int i = 0; i < 12; i++) {

    for (j = 0; j < i; j++)
        {
        if (arr[i] == arr[j])
            a+=1;
        }
    }
    cout <<"Total duplicate numbers in the elements are: "<< a<< " ";

    return 0;
}

