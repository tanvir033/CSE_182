#include<stdio.h>

main()
{
    int A[3][3],B[3][3],C[3][3],i,j;

    printf("Enter the values for matrix A: \n");

    for(i=0 ; i < 3 ; i++)
    {
        for(j=0 ; j < 3 ; j++)
        {
            scanf("%d",&A[i][j]);
        }
    printf("\n");

    }

    printf("Matrix A: \n");

    for(i=0 ; i < 3 ; i++)
    {
        for(j=0 ; j < 3 ; j++)
        {
            printf("%d  ",A[i][j]);

        }
        printf("\n");

    }


        printf("\n");



        printf("Enter the values for matrix B: \n");

    for(i=0 ; i < 3 ; i++)
    {
        for(j=0 ; j < 3 ; j++)
        {
            scanf("%d",&B[i][j]);
        }
    printf("\n");

    }
    printf("Matrix B: \n");


    for(i=0 ; i < 3 ; i++)
    {
        for(j=0 ; j < 3 ; j++)
        {
            printf("%d  ",B[i][j]);

        }
        printf("\n");

    }
    printf("\n");


        printf("Matrix C");
        printf("\n");

        for(i=0 ; i < 3 ; i++)
    {

        for(j=0 ; j < 3 ; j++)
        {
            C[i][j] =A[i][j] * B[j][i] ;
            printf("%d  ",C[i][j]);

        }
        printf("\n");

    }

    return 0;

}


