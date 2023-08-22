#include<stdio.h>

main()
{
    int a,b,n,i,k=1,c=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("\n");

    a=n;

    for(n ; n!=0 ; n=n/10)
    {
        b=n%10;
        k=1;
        for(i=b ; i<=b && i>0 ; i--)
        {
            k=k*i;

        }
        c=c+k;

    }
    if(c==a)
    printf("%d is a strong number.\n",a);
    else printf("%d is not a strong number.\n",a);

    return 0;
}
