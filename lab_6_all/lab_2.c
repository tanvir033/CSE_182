#include<stdio.h>

 main()
 {
     int i;
     char array[10];

     printf("Enter 5 integers: \n");

     for(i = 0 ; i < 5 ; i++ )
     {
         scanf("%ch",&array[i]);
     }

     printf("displaying integers: \n");

     for(i= 0; i < 5; i++)
        {
            printf("%ch\n",array[i]);
        }
     return 0;
 }
