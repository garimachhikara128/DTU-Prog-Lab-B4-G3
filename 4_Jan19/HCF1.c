#include<stdio.h>

int main()
{
    int n1, n2 ;

    printf("Enter n1 and n2 ? ") ;
    scanf("%d %d", &n1, &n2) ;

    int min ;

    if(n1 < n2)
        min = n1 ;
    else
        min = n2 ;

    int count = min ;

    while(count >= 1)
    {
        if(n1 % count == 0 && n2 % count == 0)
            break ;

        count = count - 1 ;
    }

    printf("HCF of %d and %d is %d\n", n1, n2, count) ;

    return 0 ;
}