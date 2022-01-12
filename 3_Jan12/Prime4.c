#include<stdio.h>
#include<math.h>

int main()
{
    int n ;

    printf("Enter N ?\n") ;
    scanf("%d", &n) ;

    int factors = 0 ;

    int count = 2 ;
    while(count * count <= n)
    {
        if(n % count == 0)
        {
            factors = factors + 1 ;
            break ;
        }

        count = count + 1 ;
    }

    if(factors == 0)
        printf("%d is prime\n", n) ;
    else
        printf("%d is not prime\n", n) ;

    return 0 ;
}