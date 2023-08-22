#include<stdio.h>
main()
{
    int a,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    a=n;
    for(n;n>0;n--)
    {
        if(a%n==0)  {
        printf("%d\n",n); }
    }
    return 0;
}
