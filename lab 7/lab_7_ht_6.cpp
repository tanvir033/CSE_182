//Write a C++ program to count the frequency of each element in an array.

#include<iostream>
using namespace std;

main()
{
    int i,j,k, arr[12] = {1,8,6,2,4,3,5,6,7,8,9,2},temp,sum=1 ;

    for(i=0; i < 11; i++)
    {
        for(j=0; j < 11; j++)
        {
            if(arr[j] > arr[j + 1]){
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j+1] = temp;
            }
        }
    }

    for (i = 0; i < 12; i++)
        {
            if (i < 11 && arr[i] == arr[i + 1])
            {
                sum+=1 ;
            }
            else
            {
                cout << "The frequency of the number " << arr[i] << " is " << sum << endl;
                sum = 1;
            }
        }

    return 0;
}
