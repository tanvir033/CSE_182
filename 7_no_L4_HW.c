#include<stdio.h>

main()
{
    long n,a=0;
    printf("Enter the number: ");
    scanf("%ld",&n);
    for(n;n>0;n/=10)
    {

        a=a+n%10;
    }
    printf("%ld",a);
    return 0;
}
