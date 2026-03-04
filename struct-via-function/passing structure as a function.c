#include <stdio.h>
#include <string.h>

typedef struct{

    char title[100];
    char author[100];
    char subject[100];
    char book_id[100];

}Books;

Books book1, book2;

void bookPrint (Books book) {

    printf("Title: %s \n" , book.title);
    printf("Author: %s \n" , book.author);
    printf("Subject: %s \n" , book.subject);
    printf("Book ID: %s \n" , book.book_id);

}

Books bookRead (Books book) {

    printf("\nTitle: ");
    scanf(" %[^\n]" , book.title);

    printf("\nAuthor: ");
    scanf(" %[^\n]" , book.author);

    printf("\nSubject: ");
    scanf(" %[^\n]" , book.subject);

    printf("\nID: ");
    scanf(" %[^\n]" , book.book_id);

    return book;

}

int main () {

printf("\nEnter info of first book: \n");

book1 = bookRead(book1);

printf("\nEnter info of second book: \n");

book2 = bookRead(book2);

printf("\nInfo of first book: \n");

bookPrint(book1);

printf("\nInfo of second book: \n");

bookPrint(book2);

return 0;
}

