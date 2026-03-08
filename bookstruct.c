#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[50];
    int year;
    float price;
};

int main() {
    // Initialize multiple structure variables
    struct Book book1 = {"The C Programming Language", "K&R", 1978, 45.99};
    struct Book book2 = {"Clean Code", "Robert Martin", 2008, 52.50};
    struct Book book3;
    
    // Assign values to book3
    strcpy(book3.title, "Python Crash Course");
    strcpy(book3.author, "Eric Matthes");
    book3.year = 2019;
    book3.price = 39.95;
    
    // Print all books
    printf("=== Book Catalog ===\n\n");
    
    printf("Book 1: %s by %s (%d) - $%.2f\n",
         book1.title, book1.author, book1.year, book1.price);
    
    printf("Book 2: %s by %s (%d) - $%.2f\n", 
           book2.title, book2.author, book2.year, book2.price);
    
    printf("Book 3: %s by %s (%d) - $%.2f\n", 
           book3.title, book3.author, book3.year, book3.price);
    
    return 0;
}
