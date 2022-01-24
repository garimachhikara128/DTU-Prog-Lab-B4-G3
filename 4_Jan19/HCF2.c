#include<stdio.h>

int main()
{
    int divident, divisor ;

    printf("Enter n1 and n2 ? ") ;
    scanf("%d %d", &divident, &divisor) ;

    while(1)
    {
        int rem = divident % divisor ;

        if(rem == 0)
            break ;

        divident = divisor ;
        divisor = rem ;
    }

    printf("HCF is %d\n", divisor) ;

    return 0 ;
}