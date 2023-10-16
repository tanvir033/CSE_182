#include<iostream>
using namespace std;

int reza(int a, int b)
{
    int sum=0;
    sum = a + b;
    return sum;
}


int main()
{
    int a,b,res;
    cout<<"Enter number 1: "<<endl;
    cin>> a;
    cout<<"Enter number 2: "<<endl;
    cin>> b;
    res = reza(a,b);
    cout<<"Output : "<<res;

    return 0;
}

