
#include <stdio.h>
#include <string.h>

void displayBooks();
int getTotalBooks();
void borrowBook(char bookName[]);
float calculateFine(int daysLate);
int num_books = 0,i; 
char books[100][100];      // 100 books, and 100 max title length
int book_borrowed[100]={}; 

int main()
{
    // add a few books to our library using strcpy
    strcpy(books[0], "Harry Potter");
    num_books++;
    
    strcpy(books[1], "NCERT Chemistry Class 12");
    num_books++;

    strcpy(books[2], "NCERT Physics Class 11");
    num_books++;

    displayBooks();
    printf("Number of books: %d\n",getTotalBooks());
    borrowBook("Harry Potter");
    printf("Fine: %0.2f",calculateFine(10));
    printf("Name: utsav  vara ID: 25CE134\n");
}

void displayBooks()
{
    for(i=0;i<num_books;i++)
    {
        printf("%d: %s\n", i + 1, books[i]);
    }

}

int getTotalBooks()
{
    return num_books;
}

void borrowBook(char bookName[])
{
    int flag=0;
    for(i=0;i<num_books;i++)
    {
        if(strcmp(bookName,books[i])==0)
        {
            book_borrowed[i]=1;
            flag = 1;
        }
    }
    if(flag==0)
    {
        printf("Book dosent exist!\n");
    }
    else
    {
        printf("Book borrowed: %s\n",bookName);
    }
}

float calculateFine(int daysLate)
{
    return daysLate*150
}
