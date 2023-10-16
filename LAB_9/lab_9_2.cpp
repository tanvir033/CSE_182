#include<iostream>
using namespace std;

void reza(int a, int b)
{
    int sum;
    sum = a + b;
    cout<<"Output: "<<sum;
}


int main()
{
    int a,b;
    cout<<"Enter number 1: "<<endl;
    cin>> a;
    cout<<"Enter number 2: "<<endl;
    cin>> b;
    reza(a,b);

    return 0;
}
