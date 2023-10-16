#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}


int sub(int a , int b)
{
        return a-b;
}

int multiply(int a, int b)
{
    return a*b;
}

float vag(int a, int b)
{
    return a/b;
}

int main()
{
    int a,b;
    char sign;
    cout<<"number 1: "<<endl;
    cin>> a;
    cout<<"operation(+, -, *, /): "<<endl;
    cin>> sign;
    cout<<"number 2: "<<endl;
    cin>> b;

    if(sign == '+')
    {
    int res = add(a,b);
    cout<<"Output : "<<res;
    }

    else if(sign == '-')
    {
    int res = sub(a,b);
    cout<<"Output : "<<res;
    }

    else if(sign == '*')
    {
    int res = multiply(a,b);
    cout<<"Output : "<<res;
    }

    else if(sign == '/')
    {
    float res = vag(a,b);
    cout<<"Output : "<<res;
    }


    return 0;
}

