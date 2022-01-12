#include<stdio.h>

int main()
{

    int count = 1 ; // initialization

    while(count <= 10) // condition
    {
        printf("hello\n") ;
        count = count + 1 ; // re-initialization
    }

    printf("Value of count variable is %d\n", count) ;

    return 0 ;
}