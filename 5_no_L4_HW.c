#include<stdio.h>

main()
{
    int n,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        c++;
        n/=10;
    }
    printf("Total number count is : %d ", c);
    return 0;

}
