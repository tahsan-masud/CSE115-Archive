#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Candidate {

    char name[100];
    int testPassNo;
    char phoneNo[20];
    float marks;

};

int main () {

    int n, i;

    printf("Enter number of candidates: ");
    scanf("%d", &n);

    struct Candidate *c;

    c = malloc(n * sizeof(struct Candidate));
    if (c == NULL) { printf("Memory allocation failed.\n"); exit (1); }

    printf(" \n");


    for (i=0 ; i<n ; i++)
    {
        printf("\nEnter information of candidate %d: \n", (i+1) );

        printf("\nName: ");
        scanf(" %[^\n]", c[i].name);

        printf("\nTest Pass Number: ");
        scanf("%d", &c[i].testPassNo);

        printf("\nPhone Number: ");
        scanf(" %19[^\n]", c[i].phoneNo);

        printf(" \n");
    }


    FILE *fp = NULL;
    fp = fopen("admission-253.dat" , "wb");
    if (fp==NULL) {printf("File opening failed.\n"); exit(1);}

    fwrite(&n, sizeof(int), 1, fp);

    fwrite(c, sizeof(struct Candidate), n, fp);

    fclose(fp);

    free(c);


return 0;
}
