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

    struct Candidate *c;
    struct Candidate temp;

    int n, i, j;

    FILE *fp = NULL;
    fp = fopen("admission-253.dat" , "rb");
    if(fp==NULL) { printf("File opening failed.\n"); exit(1); }

    fread(&n, sizeof(int), 1, fp);

    c = malloc(n * sizeof(struct Candidate) );
    if (c==NULL) { printf("Memory allocation failed."); exit(1); }

    fread(c, sizeof(struct Candidate), n, fp);

    fclose(fp);


    printf("\nEnter marks of each candidate:\n");
    for (i=0; i<n; i++)
    {
        printf("\nMarks of %s (Test Pass - %d) : " , c[i].name , c[i].testPassNo);
        scanf("%f", &c[i].marks);
    }


    for (i=0; i<(n-1) ; i++)
    {
        for (j=0; j<(n-i-1); j++)
        {
            if(c[j].marks < c[j+1].marks)
                {
                    temp = c[j];
                    c[j] = c[j+1];
                    c[j+1] = temp;
                }
        }
    }

    FILE *pf = NULL;
    pf = fopen("results-253.txt" , "w");
    if (pf==NULL) { printf("File opening failed.\n"); exit(1); }

    for (i=0; i<n; i++)
    {
        fprintf(pf, "Serial Number: %d", (i+1) );
        fprintf(pf, "\nName: %s", c[i].name );
        fprintf(pf, "\nTest Pass Number: %d", c[i].testPassNo );
        fprintf(pf, "\nMarks: %.2f \n", c[i].marks);
        fprintf(pf, "\n");
    }
    //as the question did not state to print phone number in the text file, i did not include phone number.

    fclose(pf);

    free(c);

return 0;
}
