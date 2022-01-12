#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?\n") ;
    scanf("%d", &n) ;

    int count = 1 ;
    while(count <= n)
    {
        if(n % count == 0)
            printf("%d\n", count) ;

        count = count + 1 ;
    }

    return 0 ;
}