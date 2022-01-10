#include<stdio.h>

int main()
{
    int p, r, t, si;

    printf("Enter p, r and t ?\n") ;
    scanf("%d %d %d", &p, &r, &t) ;

    si = (p * r * t)/100 ;

    printf("Simple Interest is %d Rs.\n", si) ;

    return 0 ;
}