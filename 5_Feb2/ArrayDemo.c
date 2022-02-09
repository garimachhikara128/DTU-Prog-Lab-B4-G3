#include<stdio.h>

int main()
{
    // create
    int arr[5] ;

    // update
    arr[0] = 10 ;
    arr[1] = 20 ;
    arr[2] = 30 ;
    arr[3] = 40 ;
    arr[4] = 50 ;

    // get
    printf("%d\n", arr[0]) ;
    printf("%d\n", arr[1]) ;
    printf("%d\n", arr[2]) ;
    printf("%d\n", arr[3]) ;
    printf("%d\n", arr[4]) ;

    // loop
    for(int i = 0 ; i <= 4 ; i = i + 1)
    {
        printf("%d\n", arr[i]) ;
    }

    return 0 ;
}