#include<stdio.h>>
#include<math.h>
//finding the ratio
/*main ()
{
    int a,b,c,d;
    float e;
    scanf("%d%d%d%d",&a,&b,&c,&d);
   // printf("a=%d, b=%d, c=%d, d=%d\n",a,b,c,d);
    if((c-d)!=0)
        {
            e=(a+b)/(c-d);
            printf("The ratio is %f", e);
        }
    return 0;
}
*/


//odd or even

/*int main()
{
    int a;
    printf("enter the intiger :");
    scanf("%d",&a);
    if (a%2!=0){
        printf("%d is an odd integer. \n",a);
    }
    else
    {
        printf("%d is an even integer.\n",a);
    }
    return 0;
}*/


//Program to relate two integers using =, > or < symbolProgram to relate two integers using =, > or < symbol


main()
{
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("Result :%d=%d",a,b);
    }
    else if(a>b){
        printf("Result :%d>%d",a,b);
    }
    else {
        printf("Result :%d<%d",a,b);
    }
    return 0;
}

/*
//GRADE Calculator
int main()
{
    int a;
    printf("Give the number of the Exam: ");
    scanf("%d",&a);

if(a<100&&a>0)
    {

    if(a==100 && a>=80){
        printf("Your grade is 4.00");
    }
    else if(a<80 && a>=75){
        printf("Your grade is 3.75");
    }
    else if(a<75 && a>=70 ){
        printf("Your grade is 3.50");
        }
    else if(a<70 && a>=65 ){
        printf("Your grade is 3.25");
        }
    else if(a<65 && a>=60 ){
        printf("Your grade is 3.00");
        }
    else if(a<60 && a>=55 ){
        printf("Your grade is 2.75");
        }
    else if(a<55 && a>=50 ){
        printf("Your grade is 2.50");
        }
    else if(a<50 && a>=45 ){
        printf("Your grade is 2.25");
        }
    else if(a<55 && a>=40 ){
        printf("Your grade is 2.00");
        }
    else{
        printf("You have failed in the exam");
        }}
        else{printf("invalid");}
    return 0;
}
*/
