#include<stdio.h>
#include<math.h>
main()
/*
{
    int i;

    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}*/

//sum of the number of till n.
/*
{
int n, c, sum = 0;
printf("Enter a positive integer: ");
scanf("%d", &n);
for(c = 1; c <= n; c++)
{
sum += c;
}
printf("Sum = %d", sum);
return 0;
}
*/
/*
//sum if odd number till n.
{
    int n,i,sum=0;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        sum+=i;
    }
    printf("%d", sum);
    return 0;

}
*/
/*
{
    int n,i,sum=0;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    for(i=0;i<=n;i+=2)
    {
        sum+=i;
    }
    printf("%d", sum);
    return 0;

}*/
/*
{
    int i=1;
    while (i <= 5){
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/
/*
{
    int a,b,sum=0;
    do {
        printf("Enter the number : ");
        scanf("%d",&a);
        sum+=a;
    }
    while (a!=0);
    printf("sum = %d",sum);
    return 0;

}*/

{
double number, sum = 0;
// the body of the loop is executed at least once
do {
printf("Enter a number: ");
scanf("%lf", &number);
sum += number;
}
while(number != 0.0);
printf("Sum = %.2lf",sum);
return 0;
}
