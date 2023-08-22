#include <stdio.h>

int main()
{
    int i, j, n, a , sum=0;


    printf("From 1 to : ");
    scanf("%d", &n);

    for(i=2; i<=n; i++)
    {
        a = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                a = 0;
                break;
            }
        }

        if(a==1)
        {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between 1 to %d = %d", n, sum);

    return 0;
}

