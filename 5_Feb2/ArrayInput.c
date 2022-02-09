#include<stdio.h>

int main()
{
    
    int n ;

    printf("Enter N ? ") ;
    scanf("%d", &n) ;

    int arr[n] ;

    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("arr[%d] ? ", i) ;
        scanf("%d", &arr[i]) ;
    }

    printf("Array is :\n") ;
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("%d\t", arr[i]) ;
    }
    printf("\n") ;

    return 0 ;
}