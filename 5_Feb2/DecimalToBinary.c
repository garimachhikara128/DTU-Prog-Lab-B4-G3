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
        int rem = n % 2 ;

        ans = ans + rem * mult ;

        n = n / 2 ; 
        mult = mult * 10 ;
    }

    printf("Binary is %d\n", ans) ;

    return 0 ;
}