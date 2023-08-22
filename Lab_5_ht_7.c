#include<stdio.h>

int main()
{
    int a, i, j, n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("\n");
    printf("All Prime Factors of %d are: ", n);

    for(i=2 ; i<=n ; i++)
    {
        if( n%i==0 )
            {
                a = 1;
                for(j=2 ; j <= i/2 ; j++)
                {
                    if(i%j == 0)
                        {
                            a = 0;
                            break;
                        }
                }

                if(a==1)
                {
                    printf(" %d " , i);
                }
            }
    }
    printf("\n");
    return 0;
}



