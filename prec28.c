
#include <stdio.h>
#include <string.h>

union book
{
    int id;
    char title[50];
    char author[50];
    float price;
    int issued;
};

int main()
{
    union book b;

    printf("Enter accession number: ");
    scanf("%d", &b.id);

    // Since union can only store one member at a time, we need to use separate variables for each field
    int id = b.id;

    printf("Enter book title: ");
    scanf(" %[^\n]", b.title);
    char title[50];
    strcpy(title, b.title);

    printf("Enter author name: ");
    scanf(" %[^\n]", b.author);
    char author[50];
    strcpy(author, b.author);

    printf("Enter book price: ");
    scanf("%f", &b.price);
    float price = b.price;

    printf("Is the book issued? (1 for Yes, 0 for No): ");
    scanf("%d", &b.issued);
    int issued = b.issued;

    printf("\nBook Details:\n");
    printf("Accession Number: %d\n", id);
    printf("Title: %s\n", title);
    printf("Author: %s\n", author);
    printf("Price: %.2f\n", price);
    printf("Issued: %s\n", issued ? "Yes" : "No");


    printf("Name: utsav vara ID: 25CE134\n");
    return 0;
}
