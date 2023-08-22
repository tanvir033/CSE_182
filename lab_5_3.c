#include<stdio.h>
main()
{
    int i;
    for(i=0; i<=20;i++)
    {
        //printf("%d\n",i);
        if(i%5==0){
        printf("pass \n");
        continue;
            }//break;
            printf("%d\n",i);
    }
    //printf("After coming outside of the loop the number is: %d",i);
    return 0;
}
