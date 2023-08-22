#include<stdio.h>
main()
{
    int i,n,a;
    printf("Enter the number: ");
    scanf("%d",&n);
    if( n>2 ){
    for(i=2 ; i < n/2 ; i++)
    {

        if(n%i==0){
                a=0;
                break;
            }
    }
    if(a==0){
        printf("%d is not a prime number.",n);}
    else {
        printf("%d is a prime number.",n);}
    }
    else if (n == 2){
        printf(" 2 is a prime number");
    }
    else {
        printf("%d is not a prime number",n);
    }

    return 0;
}

