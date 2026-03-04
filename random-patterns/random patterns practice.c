#include <stdio.h>

int main() {

int n, i, j;

printf("Enter value of n: ");
scanf("%d" , &n);


/*       o
        oo
       ooo
      oooo
     ooooo     */


for (i=1 ; i<=n ; i++) {

    for (j=1 ; j<=(n-i) ; j++) { printf (" "); }

    for (j=1 ; j<=i ; j++) { printf ("o"); }

printf(" \n");


}

                printf(" \n");



/*       o
        ooo
       ooooo
      ooooooo
     ooooooooo     */

for (i=1 ; i<=n ; i++) {

    for (j=1 ; j<=n-i ; j++) { printf (" "); }

    for (j=1 ; j<=(2*i-1) ; j++) { printf ("o") ; }

    printf (" \n");

}

                printf(" \n");


/*          ooooo
           o   o
          o   o
         o   o
        ooooo           */


for (i=1 ; i<=n ; i++) {

    for (j=1 ; j<=(n-i) ; j++) { printf (" "); }

    for (j=1 ; j<=n ; j++)  {
                                if ( j == 1 || j == n || i == 1 || i == n ) { printf ("o");}
                                else { printf (" "); }
                            }

    printf (" \n");

}

                printf(" \n");


/*    ooooooooo
       o     o
        o   o
         o o
          o         */


for (i=n ; i>=1 ; i--){

    for (j=1 ; j<= (n-i) ; j++) { printf (" "); }

    for (j=1 ; j<=2*i-1 ; j++)  {
                                    if (j == 1 || j == 2*i-1 || i == n ) { printf ("o"); }
                                    else { printf (" "); }

                                }

    printf (" \n");

}

                printf(" \n");


/*    ab
     abc
    abcde
   abcdefg
  abcdefghi
   abcdefg
    abcde
     abc
      a    */

for (i=1 ; i<=n ; i++) {

    for (j=1 ; j<= n-i ; j++) { printf (" "); }

    for (j=1 ; j<=2*i - 1 ; j++) { printf ("%c" , 'a'+j-1 ); }

    printf (" \n"); }

for (i=(n-1) ; i>=1 ; i--) {

    for (j=1 ; j<= n-i ; j++) { printf (" "); }

    for (j=1 ; j<=2*i-1 ; j++) {printf ("%c" , 'a'+(j-1) ); }

    printf (" \n");

}

                printf(" \n");


 /*   1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
 1 5 10 10 5 1      */


for (i=0 ; i<=n ; i++) {

    for (j=0 ; j<= n-i ; j++) {printf (" "); }

    int num = 1;

    for (j=0 ; j<=i ; j++ ) {   printf ("%d " , num);
                                num = num*(i-j)/(j+1) ;  }

printf (" \n");

}





return 0;
}
