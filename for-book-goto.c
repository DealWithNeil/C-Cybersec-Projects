/* Display and print a basic structure variable program: direct field access and format specifier.*/

#include <stdio.h>
#include <string.h>

#define TITLE_LEN 50

int main(void)
{
    /* Anonymous struct declaring variable movie1 */
    struct {
        int release_year;
        char title[TITLE_LEN + 1];
        double rating;
    } movie1;

    /* Assigning values to movie1 members */
    movie1.release_year = 2014;
    strcpy(movie1.title, "Interstellar");
    movie1.rating = 8.7;

    /* Printing the contents of movie1 */
    printf("=== Movie Details ===\n");
    printf("Release Year: %d\n", movie1.release_year);
    printf("Title:        %s\n", movie1.title);
    printf("IMDb Rating:  %.1f/10\n", movie1.rating);

    return 0;
}