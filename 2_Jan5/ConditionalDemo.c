#include<stdio.h>

int main()
{
    int marks = 75 ;

    printf("Hello\n") ;

    if(marks >= 91)
    {
        printf("10\n") ;
    }
    else if(marks >= 82)
    {
        printf("9\n") ;
    }
    else if(marks >= 73)
    {
        printf("8\n") ;
    }
    else if(marks >= 64)
    {
        printf("7\n") ;
    }
    else if(marks >= 55)
    {
        printf("6\n") ;
    }
    else if(marks >= 46)
    {
        printf("5\n") ;
    }
    else
    {
        printf("Fail\n") ;
    }

    printf("Bye\n") ;

    return 0 ;
}