#include <stdio.h>
#include <math.h>

int main () {

int i, j, n;

double x, r, den, num, sum = 0;

printf ("enter value of x in degrees cos x: ");
scanf("%lf", &x);

printf ("enter value of n: ");
scanf("%d" , &n);

r = x ;

r = (3.14159/180.0)*r ;


for (i= 0 ; i<=n ; i++) {

    num = pow ( r , 2*i );

    den = 1 ;

    for (j=1 ; j<=2*i ; j++) { den = den * j ; }

    sum = sum + (pow (-1 , i))*(num/den) ;

}

printf("cos%.2lf = %.5lf", x, sum);

return 0;

}



