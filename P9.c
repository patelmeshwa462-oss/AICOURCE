#include <stdio.h>

struct library
{
    char title[50];
    char author[50];
    int pages;
    float price;
};

int main()
{
    struct library book;   

    printf("Enter Book Title: ");
    gets(book.title);   // Read string

    printf("Enter Author Name: ");
    gets(book.author);

    printf("Enter Number of Pages: ");
    scanf("%d", &book.pages);

    printf("Enter Book Price: ");
    scanf("%f", &book.price);

   
    printf("\n----- Book Details -----\n");
    printf("Title  : %s\n", book.title);
    printf("Author : %s\n", book.author);
    printf("Pages  : %d\n", book.pages);
    printf("Price  : %.2f\n", book.price);

    return 0;
}
