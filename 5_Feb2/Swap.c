#include<stdio.h>

int main()
{
    int a = 10 ;
    int b = 20 ;

    printf("a: %d\tb: %d\n",a,b) ;

    // using extra variable
    int temp = a ;
    a = b ;
    b = temp ;

    // without using extra variable
    a = a + b ; // a = 30
    b = a - b ; // b = 10
    a = a - b ; // a = 20

    printf("a: %d\tb: %d\n",a,b) ;

    return 0 ;
}