//Write a C++ program to print all unique elements in the array.

#include<iostream>
using namespace std;

main()
{
    int i,j,k,arr[12] = {1,8,6,2,4,3,5,6,7,8,9,2}, temp;

    for (int i = 0; i < 12; i++) {

    for (j = 0; j < i; j++)
        {
        if (arr[i] == arr[j])
            break;
        }
        if (i == j) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
