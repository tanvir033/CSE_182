#include<iostream>
using namespace std;

int fibo(int x)
{

    if((x==1) || (x==0))
    {
        return (x);
    }
    else
    {
        return (fibo(x-1 )+ fibo(x-2));
    }
}

int main()
{
    int term , i=0;
    cout<<"Enter the number of the terms for the Fibonacci series. ";
    cin>> term;


    cout<<"Fibonacci series: "<<endl;

    while(i < term){
    cout<<" "<<fibo(i);
    i++;
    }
    return 0;
}
