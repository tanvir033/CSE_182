#include <stdio.h>

int main()
{
    int i, j, n, a ;


    printf("Find all prime between 1 to : ");
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
            printf("%d is a prime number \n",i);
        }
    }


    return 0;
}
