#include<stdio.h>

main()
{
    int i,n,sum=0;
    printf("Enter a positive Integer: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;

}
