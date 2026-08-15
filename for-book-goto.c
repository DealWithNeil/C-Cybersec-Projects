/* Display and print a basic structure variable program using anonymous structures pt2.*/

#include <stdio.h>
#include <string.h>

#define MAX_TITLE_LEN 60

int main(void)
{
    /* Anonymous struct defining two book variables: book1 and book2 */
    struct {
        int catalog_id;
        char title[MAX_TITLE_LEN + 1];
        float price;
        int in_stock;
    } book1, book2;

    /* Initializing book1 */
    book1.catalog_id = 1001;
    strcpy(book1.title, "The C Programming Language");
    book1.price = 49.99;
    book1.in_stock = 15;

    /* Initializing book2 */
    book2.catalog_id = 1002;
    strcpy(book2.title, "C Programming: A Modern Approach");
    book2.price = 78.50;
    book2.in_stock = 8;

    /* Printing book details */
    printf("=== Book 1 Details ===\n");
    printf("Catalog ID:     %d\n", book1.catalog_id);
    printf("Title:          %s\n", book1.title);
    printf("Price:          $%.2f\n", book1.price);
    printf("Stock Quantity: %d\n\n", book1.in_stock);

    printf("=== Book 2 Details ===\n");
    printf("Catalog ID:     %d\n", book2.catalog_id);
    printf("Title:          %s\n", book2.title);
    printf("Price:          $%.2f\n", book2.price);
    printf("Stock Quantity: %d\n", book2.in_stock);

    return 0;
}