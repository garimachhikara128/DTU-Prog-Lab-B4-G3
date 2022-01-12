#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?\n") ;
    scanf("%d", &n) ;

    while(n % 2 == 0)
    {
        printf("Even\n") ;
        break ;
    }

    return 0 ;
}