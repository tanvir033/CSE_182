#include<stdio.h>

//find the palindrome number
main()
{
    long long n, c, r=0, a=0;
    printf("Enter the number: ");
    scanf("%lld" , &n);
    c = n;
    for(n ; n > 0 ; n /= 10)
    {
        a = n % 10;
        //printf("%ld\n",a);
        r = r * 10 + a;

    }

   // printf("The reversed number is %lld \n", r) ;
    if(r == c)
    {
        printf("It is palindrome number\n" ) ;
    }
    else {
            printf("It is not a palindrome number") ;
    }
    return 0;
}
