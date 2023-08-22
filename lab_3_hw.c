#include<stdio.h>
#include<math.h>

/*main ()
{
    int a;

    printf("give the number: \n");

    scanf("%d", &a);

    if(a==0){

    printf("%d is zero", a);
    }

    else if(a>0){

    printf("%d is positive", a);
    }

    else printf("%d is negative",a);

    return 0;
}*/
/*
main()
{
    int a;
    printf("Input the number : ");
    scanf("%d",&a);
    if(a%5==0&&a%11==0){

    printf("%d is Divisible by 5 and 11",a);
    }
    else printf("%d is not Divisivble by 5 and 11",a );

return 0;
}*/
/*
main()
{
    int a,b,c;
    printf("Input the three sides: ");
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)>c)&&((b+c)>a)&&((a+c)>b))
        printf("The triangle is valid");
    else printf("The triangle is not valid");
    return 0;
}*/
/*
main()
{
    int a,b,c;
    printf("Enter the 3 sides : ");
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)>c)&&((b+c)>a)&&((a+c)>b))
    {
        if(a==b&&b==c) printf("the triangle is equilateral.");
        else if((a==b)||(a==c)||(c==b)) printf("the triangle is isosceles.");
        else printf("the triangle is scalene");
    }
}*/
/*
main()
{
    int a,b,c;
    float d,e,f;
    printf("Input the numbers a, b & c : ");
    scanf("%d%d%d",&a,&b, &c);
    printf("%d*x^2+%d*x+%d=0\n",a,b,c);
    f=b*b-4*a*c;
    if(f>0||f==0){
    d=(-b+(sqrt(f)))/(2*a);
    e=(-b-(sqrt(f)))/(2*a);
    printf("The roots of the Quadratic equations are %.4f and %.4f",d,e);}
    else printf("The roots are imaginary");
    return 0;

}*/


int main() {
    float u, b, c = 0.2;

    printf("Enter the electricity units consumed: ");
    scanf("%f", &u);

    if (u <= 50) {
        b = u * 0.50;
    } else if (u <= 150) {
        b = 50 * 0.50 + (u - 50) * 0.75;
    } else if (u <= 250) {
        b = 50 * 0.50 + 100 * 0.75 + (u - 150) * 1.20;
    } else {
        b = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (u - 250) * 1.50;
    }

    // Adding the surcharge
    b += b * c;

    printf("Total electricity bill:Rs. %f\n", b);

    return 0;
}


