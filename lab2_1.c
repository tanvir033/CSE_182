#include<stdio.h>
#include<math.h>
main()

//program to calculate the perimeter and area of a triangle.(using scanf)
/*
{
    int a,b,c,d,e;
    float g;
    printf("enter the three sides of the triangle: \n");
    scanf("%d%d%d",&a,&b,&c);
    printf("a= %d b= %d c= %d\n",a,b,c);
    d=a+b+c;
    printf("perimeter is %d\n",d);
    g=sqrt((d/2)*((d/2)-a)*((d/2)-b)*((d/2)-c));
    printf("area is : %f\n", g);

}*/

//find the maximum between two numbers using conditional operator.

/*{
    int a,b;
    printf("Give the 2 nnumbers a & b:\n");
    scanf("%d%d",&a,&b);
    (a>b)?(printf("maximum is %d",a)):(printf("maximum is %d",b));
    return 0;
}*/

//part 2
/*
{
    int a,b;
    printf("Give the 2 nnumbers a & b:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
        (printf("maximum is %d",a));
    else(printf("maximum is %d",b));
    return 0;
}*/

//enter length and breadth of a rectangle and find its area and perimeter.
/*
{
    int a,b,c,d;
    printf("Input the length and width of the rectangle: ");
    scanf("%d %d",&a,&b);
    printf("length %d\n",a);
    printf("width %d\n",b);
    c=a*b;
    d=a+b;
    printf("area is %d and perimeter is %d ",c,d );
    return 0;

}*/

//program to enter radius of a circle and find its diameter, circumference and area.
/*
{
    int r3
    ;
    float c,a,pi=3.1416;
    printf("input the radius of the circle : ");
    scanf("%d",&r);
    c=2*pi*r;
    a=pi*r*r;
    printf("Diameter is: %d\n",2*r);
    printf("circumference is: %.3f\n",c);
    printf("area is: %.3f",a);
    return 0;
}
*/

//convert centimeter into meter and kilometer.
/*
{
    float a,b,c;
    printf("Input the length: ");
    scanf("%f",&a);
    printf("The length is :%.3f in centimeter\n",a);
    b=a/100;
    c=a/10000000;
    printf("The length is :%.3f in meter\n",b);
    printf("The length is : %f in Kilometer\n",c);
    return 0;
}*/

//°Celsius and convert it into °Fahrenheit.
/*
{
    float C,F;
    printf("Input the temperature in Celsius: ");
    scanf("%f",&C);
    F=(9*C/5)+32;
    printf("The temperature is %.2f in Fahrenheit", F);
}*/

//to convert days into years, months, weeks and days left

/*{
    int d,y,m,w,l;
    printf("input the day : ");
    scanf("%d",&d);
    y=d/365;
    m=(d%365)/30;
    w=((d%365)%30)/7;
    l=((d%365)%30)%7;
    printf(" The number of year is : %d \n",y);
    printf(" The number of month is : %d \n",m);
    printf(" The number of week is : %d \n",w);
    printf(" The number of days left is : %d \n", l);
    return 0;
}
*/

//find maximum between three numbers using conditional/ternary operator
/*
{
    int a,b,c;
    printf("Input the 3 numbers : \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
     printf("%d is the maximum number. ",a);
     else if (b>a&&b>c)
     printf("%d is the maximum number. ",b);
     else printf("%d is the maxumum number.",c);
     return 0;
}*/

//check whether a number is even or odd using conditional/ternary operator.
/*
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    if (a%2==0)
        printf("%d is even",a);
    else printf("%d is odd",a);
    return 0;
}*/

// check whether year is leap year or not

{
    int a;
    printf(" Input the year : ");
    scanf("%d",&a);
    if((a%4==0 && a%100!=0)||(a%400==0))
        printf("%d is a leap year. ",a);
    else
        printf("%d is not a leap year.",a);
        return 0;
}
