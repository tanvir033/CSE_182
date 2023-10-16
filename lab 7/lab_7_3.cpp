#include<iostream>
using namespace std;

int main()
{
    int beg, last, mid,j,k, item;
    int arr[15]={11,22,30,33,40,44,55,60,67,77,80,88,99};
    beg = 0;
    last = 13;
    cin>>item;
    mid =int ((beg+last)/2);
    cout<<"mid: "<<mid<< endl;

    while(beg<last && arr[mid] != item){
        if (item < arr[mid])
        {
            last = mid - 1;
        }
        else
        {
            beg = mid + 1 ;
        }
        mid =int ((beg+last)/2);
        cout<<"mid: "<<mid<< endl;
    }
    if (item == arr[mid])
    {
        cout<<"Location of the item= "<<item<<" is : "<<mid+1<<endl;
    }
    else{
        cout<<"item is not found "<<endl;
    }
    return 0;
}

