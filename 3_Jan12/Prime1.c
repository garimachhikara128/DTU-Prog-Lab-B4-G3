#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?\n") ;
    scanf("%d", &n) ;

    int factors = 0 ; // will keep a track of no. of factors

    int count = 1 ;
    while(count <= n)
    {
        if(n % count == 0)
            factors = factors + 1 ;

        count = count + 1 ;
    }

    if(factors == 2)
        printf("%d is prime\n", n) ;
    else
        printf("%d is not prime\n", n) ;

    return 0 ;
}