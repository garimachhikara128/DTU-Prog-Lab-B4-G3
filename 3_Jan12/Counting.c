#include<stdio.h>

int main()
{

    int n ;

    printf("Enter N ?\n") ;
    scanf("%d", &n) ;

    // logic ...
    int count = 1 ;
    while(count <= n)
    {
        printf("%d\n", count) ;
        count = count + 1 ;
    }

    return 0 ;
}