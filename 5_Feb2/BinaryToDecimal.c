#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ? ") ;
    scanf("%d", &n) ;

    int mult = 1 ;
    int ans = 0 ;

    while(n != 0)
    {
        int rem = n % 10 ;

        ans = ans + rem * mult ;

        n = n / 10 ; 
        mult = mult * 2 ;
    }

    printf("Decimal is %d\n", ans) ;

    return 0 ;
}