#include <stdio.h>
#include <math.h>

int main ()

{
    int n, i, j;

    double sum = 0, num, den, x, r;

    printf ("Enter value of x in degree in sin x: ");
    scanf("%lf" , &x);

    printf("\nEnter value of n: ");

    scanf("%d" , &n);

    r = x;

    r = (3.14159/180)*r ;

    for (i=1 ; i<=n ; i++) {

        num = pow (r , 2*i-1) ;

        den = 1;

        for (j=1 ; j<=2*i-1 ; j++) { den = den*j ; }

        sum = sum + (pow (-1, i+1 )*(num/den)) ;

    }

printf ("\n sin%.2lf = %.5lf" , x , sum);


    return 0;


}
