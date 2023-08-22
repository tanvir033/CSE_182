#include<stdio.h>

 main()
 {
     int i;
     char array[35];

     printf("Enter name character \n");

     for(i = 0 ; i < 15 ; ++i )
     {
         scanf("%c",&array[i]);
     }

     printf("\n");

     printf("displaying integers: \n");

     printf("\n");

     for(i= 0; i < 15; ++i )
        {
            printf("%c",array[i]);
        }
     return 0;
 }

