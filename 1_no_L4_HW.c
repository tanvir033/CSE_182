#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("%d\t",n);
        n--;
    }
    return 0;
}
