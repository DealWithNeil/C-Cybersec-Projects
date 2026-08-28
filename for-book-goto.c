/* Display and print a basic structure variable program: add book catalog example using anonymous struct.*/

#include <stdio.h>
#include <string.h>

#define AUTHOR_LEN 40

int main(void)
{
    /* Anonymous struct declaring variable book1 */
    struct {
        int page_count;
        char author[AUTHOR_LEN + 1];
        double retail_price;
    } book1;

    /* Assigning values to book1 members */
    book1.page_count = 416;
    strcpy(book1.author, "George Orwell");
    book1.retail_price = 14.99;

    /* Printing the contents of book1 */
    printf("=== Book Catalog Information ===\n");
    printf("Author:       %s\n", book1.author);
    printf("Page Count:   %d pages\n", book1.page_count);
    printf("Retail Price: $%.2f\n", book1.retail_price);

    return 0;
}