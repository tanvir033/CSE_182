#include<stdio.h>

main()
{
    int i,n,a=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(n;n>0;n--)
    {
     a=a*n;
    }
    printf("%d",a);
    return 0;
}
