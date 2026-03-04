#include <stdio.h>
#include <math.h>

int main () {

int i, j, n;

double x, sum=0, num, den ;

printf("Enter value of n: ");
scanf("%d" , &n);

printf("\nEnter value of x: ");
scanf ("%lf" , &x);



for (i=0 ; i<=n; i++) {

    num = pow (x , i) ;

    den = 1;

    for (j=1 ; j<=i ; j++) { den = den*j ; }

    sum = sum + (num/den) ;

}

printf ("\ne^%.1lf = %.5lf" , x, sum);

return 0;

}
