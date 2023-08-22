#include<stdio.h>

main()
{
    int n,a;
    printf("Enter the number: ");
    scanf("%d",&n);
    a=n%10;
    for (n;n>10;n=n/10){
        n;
    }
    printf("The 1st digit is: %d \n",n);
    printf("The last digit is: %d \n",a);
}
